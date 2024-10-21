/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:09:20 by juanherr          #+#    #+#             */
/*   Updated: 2024/10/10 13:30:30 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*ft_free(char *ptr)
{
	if (ptr)
	{
		free(ptr);
		ptr = NULL;
	}
	return (NULL);
}

static char	*check_end(char *line)
{
	if (!line)
		return (NULL);
	if (ft_strlen(line) == 0)
	{
		free(line);
		return (NULL);
	}
	else
		return (line);
}

static char	*obtain_line(char **overline)
{
	char	*leftover;
	char	*line;
	size_t	i;

	if (!*overline)
		return (NULL);
	i = 0;
	while ((*overline)[i] && (*overline)[i] != '\n')
		i++;
	if ((*overline)[i] == '\n')
	{
		line = ft_substr(*overline, 0, i + 1);
		leftover = ft_strdup(*overline + i + 1);
		if (!leftover || !line)
			return (ft_free(*overline));
		free(*overline);
		*overline = leftover;
		return (line);
	}
	line = ft_strdup(*overline);
	free(*overline);
	*overline = NULL;
	return (check_end(line));
}

static void	get_overline(int fd, char *buffer, ssize_t bytes, char **overline)
{
	char	*aux;

	buffer[bytes] = '\0';
	while (bytes > 0)
	{
		buffer[bytes] = '\0';
		if (!*overline)
			*overline = ft_strdup("");
		if (!*overline)
			return ;
		aux = ft_strjoin(*overline, buffer);
		free(*overline);
		*overline = aux;
		if (ft_strchr(buffer, '\n'))
			break ;
		bytes = read(fd, buffer, BUFFER_SIZE);
	}
	free(buffer);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*buffer;
	static char	*overline[4096];
	ssize_t		readbytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	readbytes = read(fd, buffer, BUFFER_SIZE);
	if (readbytes < 0)
	{
		ft_free(buffer);
		ft_free(overline[fd]);
		overline[fd] = NULL;
		return (NULL);
	}
	get_overline(fd, buffer, readbytes, &overline[fd]);
	line = obtain_line(&overline[fd]);
	return (line);
}

//int	main(void)
//{
//	int		fd;
//	char	*line;

//	fd = open("1char.txt", O_RDONLY);
//	line = get_next_line(fd);
//	while (line)
//	{
//		printf("%s", line);
//		free (line);
//		line = get_next_line(fd);
//	}
//	close(fd);
//	return (0);
//}
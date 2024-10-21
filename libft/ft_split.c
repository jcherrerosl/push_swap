/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:24:46 by juanherr          #+#    #+#             */
/*   Updated: 2024/09/20 20:51:05 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*dup;

	i = 0;
	dup = (char *)malloc((n + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (s[i] && i < n)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
		{
			in_word = 0;
		}
		i++;
	}
	return (count);
}

static char	**free_matrix(char **matrix, size_t j)
{
	while (j > 0)
	{
		free(matrix[j - 1]);
		j--;
	}
	free(matrix);
	return (NULL);
}

static char	**split_process(char **matrix, const char *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	j;

	i = 0;
	j = 0;
	while (j < count_words(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			matrix[j] = ft_strndup(s + start, i - start);
			if (!matrix[j])
				return (free_matrix(matrix, j));
			j++;
		}
	}
	matrix[j] = NULL;
	return (matrix);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;

	if (!s)
		return (NULL);
	matrix = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!matrix)
		return (NULL);
	return (split_process(matrix, s, c));
}

//#include <stdio.h>

//int	main(void)
//{
//	char	*str;
//	int		i;
//	int		c;

//	str = "hello!";
//	i = 0;
//	c = 32;
//	while (ft_split(str, c)[i] != NULL)
//	{
//		printf(">%s<\n", ft_split(str, c)[i]);
//		i++;
//	}
//	return (0);
//}

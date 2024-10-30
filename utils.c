/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:11:33 by juanherr          #+#    #+#             */
/*   Updated: 2024/10/30 04:40:44 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_memory(void *ptr)
{
	if (!ptr)
	{
		print_error("Error: problema de memoria");
		exit(EXIT_FAILURE);
	}
}

void	print_error(char *error_msg)
{
	ft_putstr_fd(error_msg, 2);
}

#include "push_swap.h"

void	ft_bubblesort(int *array, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

t_list	*ft_lstnew_(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->value = 0;
	new->index = 0;
	new->next = NULL;
	return (new);
}

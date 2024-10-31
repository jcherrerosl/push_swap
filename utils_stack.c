/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:37:18 by juanherr          #+#    #+#             */
/*   Updated: 2024/10/31 15:36:52 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	best_rotate(t_list **stack, int index, int size)
{
	if (index <= size / 2)
	{
		while (index-- > 0)
			ra(stack);
	}
	else
	{
		while (index++ < size)
			rra(stack);
	}
}

int	find_min_index(t_list **stack)
{
	t_list	*current;
	int		min_value;
	int		min_index;
	int		index;

	current = *stack;
	min_value = ft_atoi(current->content);
	min_index = 0;
	index = 0;
	while (current != NULL)
	{
		if (ft_atoi(current->content) < min_value)
		{
			min_value = ft_atoi(current->content);
			min_index = index;
		}
		current = current->next;
		index++;
	}
	return (min_index);
}

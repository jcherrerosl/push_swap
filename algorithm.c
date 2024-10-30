/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:29:32 by juanherr          #+#    #+#             */
/*   Updated: 2024/10/30 15:14:27 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_to_b(t_list **stack_a, t_list **stack_b)
{
	int	size_b;
	int	k;

	k = ft_sqrt(ft_lstsize(*stack_a));
	size_b = 0;
	while (ft_lstsize(*stack_a) > 0)
	{
		if ((*stack_a)->index <= size_b)
		{
			pb(stack_a, stack_b);
			size_b++;
		}
		else if ((*stack_a)->index <= size_b + k)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			size_b++;
		}
		else
			ra(stack_a);
	}
}

void	move_to_a(t_list **stack_a, t_list **stack_b)
{
	int	max_index;

	while (*stack_b)
	{
		max_index = get_max_index(*stack_b);
		best_rotate_b(stack_b, max_index);
		pa(stack_a, stack_b);
	}
}

void	best_rotate_b(t_list **stack, int index)
{
	int	size;
	int	position;

	position = get_position(stack, index);
	size = ft_lstsize(*stack);
	if (position <= size / 2)
	{
		while ((*stack)->index != index)
			rb(stack);
	}
	else
	{
		while ((*stack)->index != index)
			rrb(stack);
	}
}

int	get_position(t_list **stack, int index)
{
	t_list	*current;
	int		pos;

	current = *stack;
	pos = 0;
	while (current && current->index != index)
	{
		current = current->next;
		pos++;
	}
	return (pos);
}

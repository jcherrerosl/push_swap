/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:29:32 by juanherr          #+#    #+#             */
/*   Updated: 2024/10/30 05:28:14 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_to_b(t_list **stack_a, t_list **stack_b)
{
	int	size_b;
	int	k;

	k = ft_sqrt(ft_lstsize(*stack_a));
	size_b = 0;
	while (ft_lstsize(*stack_a))
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
    while(*stack_b)
	{
		max_index = get_max_index(*stack_b);
		best_rotate_b(stack_b, max_index);
        pa(stack_a, stack_b);
    }
}

void	best_rotate_b(t_list **stack, int index)
{
	int	size;

	size = ft_lstsize(*stack);
	if (index <= size / 2)
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


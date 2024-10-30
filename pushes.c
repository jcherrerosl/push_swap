/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 13:37:17 by juanherr          #+#    #+#             */
/*   Updated: 2024/10/30 05:03:46 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*aux;

	if (stack_b == NULL || *stack_b == NULL)
		return ;
	aux = *stack_b;
	*stack_b = (*stack_b)->next;
	ft_lstadd_front(stack_a, aux);
	ft_putendl_fd("pa", 1);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*aux;

	if (stack_a == NULL || *stack_a == NULL)
		return ;
	aux = *stack_a;
	*stack_a = (*stack_a)->next;
	ft_lstadd_front(stack_b, aux);
	ft_putendl_fd("pb", 1);
}

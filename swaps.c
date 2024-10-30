/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:24:24 by juanherr          #+#    #+#             */
/*   Updated: 2024/10/30 14:03:15 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	sa(t_list **stack_a)
{
	t_list	*first;
	t_list	*second;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	first = *stack_a;
	second = (*stack_a)->next;
	first->next = second->next;
	second->next = first;
	*stack_a = second;
	ft_putendl_fd("sa", 1);
}

void	sb(t_list **stack_b)
{
	t_list	*first;
	t_list	*second;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	first = *stack_b;
	second = (*stack_b)->next;
	first->next = second->next;
	second->next = first;
	*stack_b = second;
	ft_putendl_fd("sb", 1);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	t_list	*first_a;
	t_list	*second_a;
	t_list	*first_b;
	t_list	*second_b;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	first_a = *stack_a;
	second_a = (*stack_a)->next;
	first_a->next = second_a->next;
	second_a->next = first_a;
	first_b = *stack_b;
	second_b = (*stack_b)->next;
	first_b->next = second_b->next;
	second_b->next = first_b;
	*stack_a = second_a;
	*stack_b = second_b;
	ft_putendl_fd("ss", 1);
}

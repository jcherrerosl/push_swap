/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverses.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:43:28 by juanherr          #+#    #+#             */
/*   Updated: 2024/10/30 14:07:00 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	rra(t_list **stack_a)
{
	t_list	*last;
	t_list	*second_last;

	if (stack_a == NULL || *stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	second_last = *stack_a;
	while (second_last->next->next != NULL)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	ft_lstadd_front(stack_a, last);
	ft_putendl_fd("rra", 1);
}

void	rrb(t_list **stack_b)
{
	t_list	*last;
	t_list	*second_last;

	if (stack_b == NULL || *stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	second_last = *stack_b;
	while (second_last->next->next != NULL)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	ft_lstadd_front(stack_b, last);
	ft_putendl_fd("rrb", 1);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	t_list	*last_a;
	t_list	*second_last_a;
	t_list	*last_b;
	t_list	*second_last_b;

	if (stack_a == NULL || *stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	if (stack_b == NULL || *stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	second_last_a = *stack_a;
	while (second_last_a->next->next != NULL)
		second_last_a = second_last_a->next;
	second_last_b = *stack_b;
	while (second_last_b->next->next != NULL)
		second_last_b = second_last_b->next;
	last_a = second_last_a->next;
	second_last_a->next = NULL;
	ft_lstadd_front(stack_a, last_a);
	last_b = second_last_b->next;
	second_last_b->next = NULL;
	ft_lstadd_front(stack_b, last_b);
	ft_putendl_fd("rrr", 1);
}

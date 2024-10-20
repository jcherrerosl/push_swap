/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverses.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:43:28 by juanherr          #+#    #+#             */
/*   Updated: 2024/10/20 17:59:30 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	rra(t_list **topA)
{
	t_list	*last;
	t_list	*second_last;

	if (topA == NULL || *topA == NULL || (*topA)->next == NULL)
		return ;
	second_last = *topA;
	while (second_last->next->next != NULL)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	ft_lstadd_front(topA, last);
	ft_putendl_fd("rra", 1);
}


void	rrb(t_list **topB)
{
	rra(topB);
	ft_putendl_fd("rrb", 1);
}

void	rrr(t_list **topA, t_list **topB)
{
	rra(topA);
	rrb(topB);
	ft_putendl_fd("rrr", 1);
}

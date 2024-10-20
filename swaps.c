/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:24:24 by juanherr          #+#    #+#             */
/*   Updated: 2024/10/20 14:43:40 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	sa(t_list **topA)
{
	t_list	*first;
	t_list	*second;

	if (*topA == NULL || (*topA)->next == NULL)
		return ;
	first = *topA;
	second = (*topA)->next;
	first->next = second->next;
	second->next = first;
	*topA = second;
}

void	sb(t_list **topB)
{
	t_list	*first;
	t_list	*second;

	if (*topB == NULL || (*topB)->next == NULL)
		return ;
	first = *topB;
	second = (*topB)->next;
	first->next = second->next;
	second->next = first;
	*topB = second;
}

void	ss(t_list **topA, t_list **topB)
{
	sa(topA);
	sb(topB);
}

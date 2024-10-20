/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotates.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:44:48 by juanherr          #+#    #+#             */
/*   Updated: 2024/10/20 15:43:39 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ra(t_list **topA)
{
	t_list	*first;

	if (topA == NULL || *topA == NULL || (*topA)->next == NULL)
		return ;
	first = *topA;
	*topA = (*topA)->next;
	first->next = NULL;
	ft_lstadd_back(topA, first);
}

void	rb(t_list **topB)
{
	t_list	*first;

	if (topB == NULL || *topB == NULL || (*topB)->next == NULL)
		return ;
	first = *topB;
	*topB = (*topB)->next;
	first->next = NULL;
	ft_lstadd_back(topB, first);
}

void	rr(t_list **topA, t_list **topB)
{
	ra(topA);
	rb(topB);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:24:24 by juanherr          #+#    #+#             */
/*   Updated: 2024/10/20 17:59:01 by juanherr         ###   ########.fr       */
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
	ft_putendl_fd("sa", 1);
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
	ft_putendl_fd("sb", 1);
}

void	ss(t_list **topA, t_list **topB)
{
	sa(topA);
	sb(topB);
	ft_putendl_fd("ss", 1);
}

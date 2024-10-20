/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 13:37:17 by juanherr          #+#    #+#             */
/*   Updated: 2024/10/20 14:49:57 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	pa(t_list **topA, t_list **topB)
{
	t_list	*aux;

	if (topB == NULL || *topB == NULL)
		return ;
	aux = *topB;
	*topB = (*topB)->next;
	aux->next = NULL;
	ft_lstadd_front(topA, aux);
}

void	pb(t_list **topA, t_list **topB)
{
	t_list	*aux;

	if (topA == NULL || *topA == NULL)
		return ;
	aux = *topA;
	*topA = (*topA)->next;
	aux->next = NULL;
	ft_lstadd_front(topB, aux);
}

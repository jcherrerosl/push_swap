/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:24:00 by juanherr          #+#    #+#             */
/*   Updated: 2024/10/20 18:36:33 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_list **topA, t_list **topB)
{
	t_list	*aux;
	size_t	size;
	
	aux = *topA;
	size = ft_lstsize(*topA);
	// primeros elementos
	pb(topA, topB);
	pb(topA, topA);

	// búsqueda del siguiente más óptimo
	while (aux->next != NULL)
	{
		if (ft_atoi(aux->content) > ft_atoi((*topB)->content))
			pb(topA, topB);
		aux = aux->next;
	}
}
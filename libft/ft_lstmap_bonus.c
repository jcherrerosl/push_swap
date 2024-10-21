/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:32:22 by juanherr          #+#    #+#             */
/*   Updated: 2024/09/22 19:55:30 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*aux;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		aux = ft_lstnew(lst->content);
		if (!aux)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		aux->content = f(aux->content);
		ft_lstadd_back(&new, aux);
		lst = lst->next;
	}
	return (new);
}

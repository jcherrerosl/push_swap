/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:55:07 by juanherr          #+#    #+#             */
/*   Updated: 2024/09/21 15:21:27 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
#include "libft.h"
#include <stdio.h>  // Para usar printf
#include <stdlib.h> // Para usar malloc y free

int main(void)
{
    char *content = "hola hola hola!";
    t_list *node = ft_lstnew(content);
    
    if (!node)
    {
        printf("Error: el nodo no pudo ser creado.\n");
        return (1);
    }
    printf("Contenido del nodo: %s\n", (char *)node->content);
    if (node->next == NULL)
        printf("El siguiente nodo es NULL (correcto).\n");
    else
        printf("Error: el siguiente nodo no es NULL.\n");
    free(node);

    return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 13:19:29 by juanherr          #+#    #+#             */
/*   Updated: 2024/10/20 18:23:05 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(void)
{
	ft_putendl_fd("Error", 2);
}

// static void	print_list(t_list **topA)
// {
// 	t_list	*aux;

// 	aux = *topA;
// 	while (aux != NULL)
// 	{
// 		ft_putendl_fd((char *)aux->content, 1);
// 		aux = aux->next;
// 	}
// }

int	main(int argc, char *argv[])
{
	t_list	*top_a;
	t_list	*top_b;
	t_list	*new;
	int		i;
	char	*content;

	top_a = NULL;
	top_b = NULL;
	if (argc > 1)
	{
		i = 1;
		while (argv[i])
		{
			content = ft_strdup(argv[i]);
			if (!content)
				return (print_error(), -1);
			new = ft_lstnew(content);
			if (!new)
			{
				free(content);
				ft_lstclear(&top_a, free);
				return (print_error(), -1);
			}
			ft_lstadd_back(&top_a, new);
			i++;
		}
	}
	//print_list(&top_a);
	sort_stack(&top_a, &top_b, ft_lstsize(top_a));
	//print_list(&top_a);
	ft_lstclear(&top_a, free);
	ft_lstclear(&top_b, free);
	return (0);
}
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



int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*new;
	int		i;
	char	*content;

	stack_a = NULL;
	stack_b = NULL;
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
				ft_lstclear(&stack_a, free);
				return (print_error(), -1);
			}
			ft_lstadd_back(&stack_a, new);
			i++;
		}
	}
	//print_list(&stack_a);
	sort_stack(&stack_a, &stack_b);
	//print_list(&stack_a);
	ft_lstclear(&stack_a, free);
	ft_lstclear(&stack_b, free);
	return (0);
}

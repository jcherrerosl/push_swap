/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 13:19:29 by juanherr          #+#    #+#             */
/*   Updated: 2024/10/31 15:15:55 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	print_list(t_list **stack_a)
{
	t_list	*current;

	current = *stack_a;
	while (current != NULL)
	{
		ft_putstr_fd(current->content, 1);
		//    ft_putstr_fd(" > index > ", 1);
		//    ft_putnbr_fd(current->index, 1);
		ft_putstr_fd(" ", 1);
		current = current->next;
	}
	ft_putstr_fd("\n", 1);
}

int	main(int argc, char *argv[])
{
	t_list			*stack_a;
	t_list			*stack_b;
	unsigned int	size;
	int				*array;

	if (argc > 2)
	{
		stack_b = NULL;
		create_stack(argc, argv, &stack_a);
		fill_values(&stack_a);
		size = ft_lstsize(stack_a);
		array = stack_to_array(stack_a, size);
		ft_bubblesort(array, size);
		assign_index(&stack_a, array, size);
		//print_list(&stack_a);
		ft_sort(&stack_a, &stack_b);
		//print_list(&stack_a);
		ft_lstclear(&stack_a, free);
		ft_lstclear(&stack_b, free);
		free(array);
		return (0);
	}
	ft_printerror("arguments are missing");
}

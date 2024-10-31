/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_stacks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:17:21 by juanherr          #+#    #+#             */
/*   Updated: 2024/10/31 17:18:04 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_stack(char **args, t_list **stack_a)
{
	t_list	*new;
	size_t	i;

	*stack_a = NULL;
	i = 0;
	while (args[i] && is_number(args[i]))
	{
		new = ft_lstnew_(ft_strdup(args[i]));
		check_memory((void **)&new->content);
		if (!new)
		{
			ft_lstclear(stack_a, free);
			ft_printerror("memory problems");
		}
		ft_lstadd_back(stack_a, new);
		i++;
	}
}

void	fill_values(t_list **stack)
{
	t_list	*current;

	current = *stack;
	while (current)
	{
		if (current->content == NULL)
			ft_printerror("empty argument");
		if (is_number(current->content))
			current->value = ft_atoi(current->content);
		current = current->next;
	}
}

int	is_sorted(t_list **stack)
{
	t_list	*current;

	current = *stack;
	while (current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}

int	get_min_index(t_list *stack)
{
	t_list	*current;
	int		min;
	int		index;

	current = stack;
	min = INT_MAX;
	index = 0;
	while (current)
	{
		if (current->value < min)
		{
			min = current->value;
			index = current->index;
		}
		current = current->next;
	}
	return (index);
}

void	best_rotate(t_list **stack, int index)
{
	int	size;

	size = ft_lstsize(*stack);
	if (index <= size / 2)
	{
		while ((*stack)->index != index)
			ra(stack);
	}
	else
	{
		while ((*stack)->index != index)
			rra(stack);
	}
}

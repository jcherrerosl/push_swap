/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:38:05 by juanherr          #+#    #+#             */
/*   Updated: 2024/10/31 15:45:05 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

// Funciones de op_stacks
void	create_stack(int argc, char **argv, t_list **stack_a);
void	fill_values(t_list **stack);
int		is_sorted(t_list **stack);

int		get_min_index(t_list *stack);
void	best_rotate(t_list **stack, int index);

// Funciones de check_args y handle_args
int		is_number(const char *str);
void	check_repeated(char **args);

char	**handle_one_arg(char *arg);
char	**handle_several_args(char *argv[]);
char	**handle_args(int argc, char *argv[]);

// utils
void	check_memory(void *ptr);
void	ft_bubblesort(int *array, int size);
t_list	*ft_lstnew_(void *content);

// utils2
int		*stack_to_array(t_list *stack, int size);
void	assign_index(t_list **stack, int *array, int size);
int		ft_sqrt(int num);
int		get_max_index(t_list *stack);

// Sorting
void	sort_two(t_list **stack_a);
void	sort_three(t_list **stack_a);
void	sort_four(t_list **stack_a, t_list **stack_b);
void	sort_five(t_list **stack_a, t_list **stack_b);
void	ft_sort(t_list **stack_a, t_list **stack_b);

// Algorithm
void	move_to_b(t_list **stack_a, t_list **stack_b);
void	move_to_a(t_list **stack_a, t_list **stack_b);
void	best_rotate_b(t_list **stack, int target_index);
int		get_position(t_list **stack, int index);
#endif
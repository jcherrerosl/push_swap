/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:38:05 by juanherr          #+#    #+#             */
/*   Updated: 2024/10/20 17:16:05 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
#include <limits.h>


void	sa(t_list **topA);
void	sb(t_list **topB);
void	ss(t_list **topA, t_list **topB);
void	pa(t_list **topA, t_list **topB);
void	pb(t_list **topA, t_list **topB);
void	ra(t_list **topA);
void	rb(t_list **topB);
void	rr(t_list **topA, t_list **topB);
void	rra(t_list **topA);
void	rrb(t_list **topB);
void	rrr(t_list **topA, t_list **topB);

// Funciones de op_arrays
int     *stack_to_array(t_list *stack, int size);
void	assign_index(t_list **stack, int *array, int size);
void    ft_bubblesort(int *array, int size);

void    best_rotate(t_list **stack, int index, int size);
int     find_min_index(t_list **stack);
int     is_sorted(t_list **stack);

//Funciones de check_args y handle_args
int	    is_number(const char *str);
int	    is_repeated(int *array, int size, int value);

void	handle_no_args(void);
void    handle_one_args(char *arg);
void    handle_several_args(int argc, char *argv[]);
void	handle_args(int argc, char *argv[]);

//utils
void    check_memory(void **ptr);
void	print_error(char *error_msg);

#endif
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

void best_rotate(t_list **stack, int index, int size);
int find_min_index(t_list **stack);
int is_sorted(t_list **stack);
void sort_stack(t_list **stack_a, t_list **stack_b, int size);

void sort_stack_two(t_list **stack_a, t_list **stack_b);
void check_four(t_list **stack_a, t_list **stack_b);

#endif
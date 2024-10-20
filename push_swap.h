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

t_list *find_min(t_list *stack);
void 	bring_min_to_top(t_list **top_a);
void 	sort_stack(t_list **top_a, t_list **top_b);

#endif
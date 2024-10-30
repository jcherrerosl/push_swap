/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:07:09 by juanherr          #+#    #+#             */
/*   Updated: 2024/10/30 04:31:02 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *stack_to_array(t_list *stack, int size)
{
    int *array;
    int i;

    array = (int *)malloc(sizeof(int) * size);
    check_memory((void **)&array);
    i = 0;
    while (stack)
    {
        array[i++] = stack->value;
        stack = stack->next;
    }
    return (array);
}

void assign_index(t_list **stack, int *array, int size)
{
    t_list *current;
    int i;

    current = *stack;
    while (current)
    {
        i = 0;
        while (i < size)
        {
            if (current->value == array[i])
            {
                current->index = i;
                break;
            }
            i++;
        }
        current = current->next;
    }
}

int ft_sqrt(int num)
{
    int sqrt;

    sqrt = 0;
    while (sqrt * sqrt <= num)
    {
        if (sqrt * sqrt == num)
            return (sqrt);
        sqrt++;
    }
    return (sqrt - 1);
}

int get_max_index(t_list *stack)
{
    int max_index;

    max_index = 0;
    while (stack)
    {
        if (stack->index > max_index)
            max_index = stack->index;
        stack = stack->next;
    }
    return (max_index);
}

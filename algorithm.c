#include "push_swap.h"

void best_rotate(t_list **stack, int index, int size)
{
	if (index <= size / 2)
	{
		while (index-- > 0)
			ra(stack);
	}
	else
	{
		while (index++ < size)
			rra(stack);
	}
}

int find_min_index(t_list **stack)
{
    t_list *current = *stack;
    int min_value = ft_atoi(current->content);
    int min_index = 0;
    int index = 0;

    while (current != NULL)
    {
        if (ft_atoi(current->content) < min_value)
        {
            min_value = ft_atoi(current->content);
            min_index = index;
        }
        current = current->next;
        index++;
    }
    return (min_index);
}

int is_sorted(t_list **stack)
{
    t_list *current;
	
	current = *stack;
    while (current != NULL && current->next != NULL)
    {
        if (ft_atoi(current->content) > ft_atoi((current->next)->content))
            return 0;
        current = current->next;
    }
    return (1);
}


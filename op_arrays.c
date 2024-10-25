#include "push_swap.h"

int	*stack_to_array(t_list *stack, int size)
{
	int	*array;
	int	i;

	array = malloc(sizeof(int) * size);
	if (!array)
		return (print_error(), -1)
	i = 0;
	while (stack)
	{
		array[i++] = ft_atoi((char *)stack->content);
		stack = stack->next;
	}
	return (array);
}

void	assign_index(t_list **stack, int *array, int size)
{
	t_list	*current;
	int		i;
	int		value;

	current = *stack;
	while (current)
	{
		i = 0;
		value = ft_atoi((char *)current->content);
		while (i < size)
		{
			if (value == array[i])
			{
				current->index = i;
				break ;
			}
			i++;
		}
		current = current->next;
	}
}

void	ft_bubblesort(int *array, int size)
{
	int	i;
	int	j;
	int	aux;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (array[i] > array[i + 1])
			{
				aux = array[i];
				array[i] = array[i + 1];
				array[i + 1] = aux;
			}
			i++;
		}
		j++;
	}
}

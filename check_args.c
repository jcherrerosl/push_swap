#include "push_swap.h"

int	is_number(const char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	if (*str == '\0')
	{
		print_error("Error: el argumento no es un número válido");
		exit(EXIT_FAILURE);
	}
	while (*str)
	{
		if (!ft_isdigit(*str))
		{
			print_error("Error: el argumento no es un número válido");
			exit(EXIT_FAILURE);
		}
		str++;
	}
	return (1);
}

int is_repeated(t_list *stack)
{
    t_list *current;
	t_list *check;

    current = stack;
    while (current)
    {
		check = current->next;
		while (check)
		{
			if (current->value == check->value)
			{
				print_error("Error: repeated arguments");
				return (1);
			}
			check = check->next;
		}
        current = current->next;
    }
    return (0);
}


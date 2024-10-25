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
		if (!isdigit(*str))
		{
			print_error("Error: el argumento no es un número válido");
			exit(EXIT_FAILURE);
		}
		str++;
	}
	return (1);
}

int	is_repeated(int *array, int size, int value)
{
    int i;

    i = 0;
	while (i < size)
	{
		if (array[i] == value)
		{
			print_error("Error: número repetido");
			exit(EXIT_FAILURE);
		}
        i++;
	}
	return (0);
}


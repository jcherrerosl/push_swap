/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:37:02 by juanherr          #+#    #+#             */
/*   Updated: 2024/10/31 15:14:20 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handle_no_args(void)
{
	ft_printerror("Error: faltan argumentos");
	exit(EXIT_FAILURE);
}

void	handle_one_arg(char *arg)
{
	char			**numbers;
	unsigned int	size;
	int				*array;
	unsigned int	i;

	numbers = ft_split(arg, ' ');
	check_memory(numbers);
	size = 0;
	while (numbers[size])
		size++;
	array = (int *)malloc(sizeof(int) * size);
	check_memory(array);
	i = 0;
	while (i < size)
	{
		is_number(numbers[i]);
		is_repeated(array, i, ft_atoi(numbers[i]));
		array[i] = ft_atoi(numbers[i]);
		free(numbers[i]);
		i++;
	}
	free(numbers);
}

void	handle_several_args(int argc, char *argv[])
{
	int	size;
	int	*array;
	int	i;

	size = argc - 1;
	array = (int *)malloc(sizeof(int) * size);
	check_memory(array);
	i = 0;
	while (i < size)
	{
		is_number(argv[i + 1]);
		is_repeated(array, i, ft_atoi(argv[i + 1]));
		array[i] = ft_atoi(argv[i + 1]);
		i++;
	}
}

void	handle_args(int argc, char *argv[])
{
	if (argc < 2)
	{
		handle_no_args();
	}
	else if (argc == 2)
	{
		handle_one_arg(argv[1]);
	}
	else
	{
		handle_several_args(argc, argv);
	}
}
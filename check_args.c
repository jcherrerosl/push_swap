/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:40:23 by juanherr          #+#    #+#             */
/*   Updated: 2024/10/31 16:24:37 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(const char *str)
{
	if (ft_atol(str) > INT_MAX || ft_atol(str) < INT_MIN)
		ft_printerror("number out of range");
	if (*str == '-' || *str == '+')
		str++;
	if (*str == '\0')
		ft_printerror("not valid number");
	while (*str)
	{
		if (!ft_isdigit(*str))
			ft_printerror("not a valid number");
		str++;
	}
	return (1);
}

void	check_repeated(char	**args)
{
	int	i;
	int	j;

	i = 0;
	while (args[i])
	{
		j = i + 1;
		while (args[j])
		{
			if (ft_atoi(args[i]) == ft_atoi(args[j]))
				ft_printerror("repeated arguments");
			j++;
		}
		i++;
	}
}

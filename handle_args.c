/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:37:02 by juanherr          #+#    #+#             */
/*   Updated: 2024/10/31 17:22:47 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**handle_one_arg(char *arg)
{
	char	**array;

	array = ft_split(arg, ' ');
	if (!array)
	{
		ft_printerror("memory problems");
	}
	return (array);
}

char	**handle_several_args(char *argv[])
{
	return (argv + 1);
}

char	**handle_args(int argc, char *argv[])
{
	if (argc == 1)
		exit(0);
	else if (argc == 2)
		return (handle_one_arg(argv[1]));
	else
		return (handle_several_args(argv));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:19:41 by juanherr          #+#    #+#             */
/*   Updated: 2024/09/19 18:18:35 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_num(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		i++;
	while (n / 10 != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		len;
	int		neg;

	len = len_num(n);
	neg = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	num = (char *)malloc(len_num(n) + 1);
	if (!num)
		return (NULL);
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	num[len] = '\0';
	while (len-- > 0)
	{
		num[len] = (n % 10) + '0';
		n = n / 10;
	}
	if (neg == 1)
		num[0] = '-';
	return (num);
}

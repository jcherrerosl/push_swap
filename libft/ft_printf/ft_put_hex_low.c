/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_low.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:14:26 by juanherr          #+#    #+#             */
/*   Updated: 2024/09/30 16:12:56 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex_low(size_t n)
{
	int		len;
	char	*hex_digits;

	len = 0;
	hex_digits = "0123456789abcdef";
	if (n >= 16)
		len += ft_put_hex_low(n / 16);
	len += ft_putchar(hex_digits[n % 16]);
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:13:39 by juanherr          #+#    #+#             */
/*   Updated: 2024/09/29 23:13:41 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	size_t	n;
	int		len;

	if (!ptr)
		return (ft_putstr("(nil)"));
	n = (size_t)ptr;
	len = ft_putstr("0x");
	len += ft_put_hex_low(n);
	return (len);
}

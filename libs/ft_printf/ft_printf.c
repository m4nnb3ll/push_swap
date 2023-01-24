/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:00:23 by abelayad          #+#    #+#             */
/*   Updated: 2022/10/28 20:42:20 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_handle_perc(const char *str, va_list ap, int count)
{
	t_indice	i;

	i.ptr = 0;
	i.i = 0;
	if (*str == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (*str == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (*str == 'p' && ++(i.ptr))
		count += ft_putnbr_b(va_arg(ap, unsigned long), HEX_L, HL, i);
	else if (*str == 'd' || *str == 'i')
		count += ft_putnbr(va_arg(ap, int));
	else if (*str == 'u' && ++(i.i))
		count += ft_putnbr_b(va_arg(ap, unsigned long), DEC, DL, i);
	else if (*str == 'x' && ++(i.i))
		count += ft_putnbr_b(va_arg(ap, unsigned long), HEX_L, HL, i);
	else if (*str == 'X' && ++(i.i))
		count += ft_putnbr_b(va_arg(ap, unsigned long), HEX, HL, i);
	else if (*str == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	ap;

	count = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%' && ++str)
			count = ft_handle_perc(str, ap, count);
		else
			count += ft_putchar(*str);
		str++;
	}
	va_end(ap);
	return (count);
}

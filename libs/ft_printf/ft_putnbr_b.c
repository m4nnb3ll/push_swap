/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:35:41 by abelayad          #+#    #+#             */
/*   Updated: 2022/10/28 20:37:13 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_b(unsigned long n, char *base, int base_len, t_indice i)
{
	int	count;

	count = 0;
	if (i.ptr && (i.ptr)--)
		count += ft_putstr("0x");
	if (i.i && (i.i)--)
		n = (unsigned int)n;
	if (n < 0)
	{
		count += ft_putchar('-');
		n *= -1;
	}
	if (n < (unsigned int)base_len)
		count += ft_putchar(base[n]);
	else
	{
		count += ft_putnbr_b(n / base_len, base, base_len, i);
		count += ft_putchar(base[n % base_len]);
	}
	return (count);
}

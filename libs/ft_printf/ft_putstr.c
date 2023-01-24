/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:36:04 by abelayad          #+#    #+#             */
/*   Updated: 2022/10/28 15:50:29 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	count;

	count = 0;
	if (!s)
		count += write(1, "(null)", 6);
	else
	{
		if (s)
			while (*s)
				count += ft_putchar(*s++);
	}
	return (count);
}

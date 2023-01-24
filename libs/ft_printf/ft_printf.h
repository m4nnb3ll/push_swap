/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:01:48 by abelayad          #+#    #+#             */
/*   Updated: 2022/10/28 20:35:32 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

# define DEC "0123456789"
# define HEX "0123456789ABCDEF"
# define HEX_L "0123456789abcdef"
# define DL 10
# define HL 16

typedef struct indice
{
	int	ptr;
	int	i;
}	t_indice;

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putnbr_b(unsigned long n, char *base, int base_len, t_indice i);

#endif

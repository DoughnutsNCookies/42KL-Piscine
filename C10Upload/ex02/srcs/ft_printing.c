/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:57:08 by schuah            #+#    #+#             */
/*   Updated: 2022/06/07 11:09:36 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(int where, unsigned char c)
{
	write(where, &c, 1);
}

void	ft_putnbr(int nbr)
{
	long	long_n;

	long_n = nbr;
	if (long_n < 0)
	{
		ft_putchar(1, '-');
		long_n *= -1;
	}
	if (long_n >= 10)
	{
		ft_putnbr(long_n / 10);
		ft_putnbr(long_n % 10);
	}
	else
		ft_putchar(1, long_n + 48);
}

void	ft_putstr(int where, char *str)
{
	while (*str != '\0')
		ft_putchar(where, (unsigned char)*str++);
}

void	ft_putstr_limited(char *str, int size)
{
	int	index;

	index = 0;
	while (index < size)
	{
		ft_putchar(1, (unsigned char)(str[index]));
		index += 1;
	}
}

void	ft_title(char *dir)
{
	ft_putstr(1, "==> ");
	ft_putstr(1, dir);
	ft_putstr(1, " <==\n");
}

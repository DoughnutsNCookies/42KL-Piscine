/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:07:01 by schuah            #+#    #+#             */
/*   Updated: 2022/05/21 14:24:06 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char num4, char num3, char num2, char num1)
{
	write(1, &num1, 1);
	write(1, &num2, 1);
	write(1, " ", 1);
	write(1, &num3, 1);
	write(1, &num4, 1);
	write(1, ", ", 2);
}

void	comb(char num1, char num2, char num3, char num4)
{
	while (num1 <= '9')
	{
		while (num2 <= '9')
		{
			while (num3 <= '9')
			{
				while (num4 <= '9')
				{
					ft_putchar(num4, num3, num2, num1);
					num4++;
				}
				num4 = '0';
				num3++;
			}
			num3 = num1;
			num2++;
			num4 = num2 + 1;
		}
		num2 = '0';
		num1++;
		num3 = num1;
		num4 = num2 + 1;
	}
}

void	ft_print_comb2(void)
{
	char	num1;
	char	num2;
	char	num3;
	char	num4;

	num1 = '0';
	num2 = '0';
	num3 = '0';
	num4 = '1';
	comb(num1, num2, num3, num4);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:33:59 by schuah            #+#    #+#             */
/*   Updated: 2022/05/21 19:47:56 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char character)
{
	write(1, &character, 1);
}

void	ft_print_combn(int nb)
{
	int	count[10];
	int	index;
	int	roof;
	int	ascii;
	int	numbertochange;

	index = 0;
	ascii = 48;
	if (nb <= 0 || nb >= 10)
	{
		return ;
	}
	while (index < nb)
	{
		count[index] = index;
		index++;
	}
	while (index > 0)
	{
		roof = 9;
		index = 0;
		ascii = 48;
		while (index < nb)
		{
			ft_putchar(count[index] + ascii);
			index++;
		}
		while (index--)
		{
			numbertochange = count[index];
			if (numbertochange < roof--)
			{
				do
				{
					count[index++] = ++numbertochange;
				}
				while
					(index < nb);
			ft_putchar(',');
			ft_putchar(' ');
			break ;
			}
		}
	}
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}

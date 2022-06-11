/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:33:59 by schuah            #+#    #+#             */
/*   Updated: 2022/05/21 20:26:52 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char character)
{
	write(1, &character, 1);
}

int	ft_findandincrease(int nb, int count[], int ascii, int roof)
{
	int	index;
	int	numbertochange;

	index = 0;
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
			count[index++] = ++numbertochange;
			while (index < nb)
			{
				count[index++] = ++numbertochange;
			}
			write(1, ", ", 2);
			break ;
		}
	}
	return (index);
}

void	ft_print_combn(int nb)
{
	int	count[10];
	int	index;
	int	ascii;
	int	roof;

	roof = 9;
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
		index = ft_findandincrease(nb, count, ascii, roof);
	}
}

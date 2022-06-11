/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 13:16:47 by schuah            #+#    #+#             */
/*   Updated: 2022/06/06 13:29:32 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(int n)
{
	if (n >= 10)
	{
		putnbr(n / 10);
		putnbr(n % 10);
	}
	else if (n <= 9)
		ft_putchar(n + 48);
}

int	main(void)
{
	int	index;

	index = 1;
	while (index <= 100)
	{
		if (index % 3 == 0 && index % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (index % 3 == 0)
			write(1, "fizz", 4);
		else if (index % 5 == 0)
			write(1, "buzz", 4);
		else if (index < 10)
			putnbr(index);
		else if (index >= 10 && index <= 99)
			putnbr(index);
		write(1, "\n", 1);
		index++;
	}
	return (0);
}

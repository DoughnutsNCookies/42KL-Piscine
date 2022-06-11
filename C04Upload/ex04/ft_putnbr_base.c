/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:48:41 by schuah            #+#    #+#             */
/*   Updated: 2022/05/26 11:48:03 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int	index;
	int	index2;

	index = 0;
	index2 = 0;
	while (base[index] != '\0')
	{
		if (base[index] == '+' || base[index] == '-')
			return (0);
		index++;
	}
	if (index <= 1)
		return (0);
	while (base[index2] != '\0')
	{
		index = index2 + 1;
		while (base[index] != '\0')
		{
			if (base[index2] == base[index])
				return (0);
			index++;
		}
		index2++;
	}
	return (1);
}

void	ft_write_base(int nbr, char *base, int index)
{
	unsigned int	print_int;
	char			character;

	if (nbr < 0)
	{
		write(1, "-", 1);
		print_int = nbr * (-1);
	}
	else
		print_int = nbr;
	if (print_int >= (unsigned int)index)
		ft_write_base((print_int / index), base, index);
	character = base[print_int % index];
	write(1, &character, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	index;

	index = 0;
	if (check_base(base))
	{
		while (base[index] != '\0')
			index++;
		ft_write_base(nbr, base, index);
	}
}

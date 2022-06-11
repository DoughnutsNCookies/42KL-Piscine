/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 13:53:46 by schuah            #+#    #+#             */
/*   Updated: 2022/06/09 14:03:24 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int nb)
{
	if (nb >= 17)
	{
		ft_putnbr(nb / 16);
		ft_putnbr(nb % 16);
	}
	else if (nb < 16)
	{
		write(1, &"0123456789abcdef"[nb], 1);
	}
}	

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_putnbr(atoi(av[1]));
	return (0);
}

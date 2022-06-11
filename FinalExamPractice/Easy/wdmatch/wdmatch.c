/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:57:18 by schuah            #+#    #+#             */
/*   Updated: 2022/06/09 12:06:17 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	index1;
	int	index2;
	int	wdc;

	wdc = 0;
	if (ac == 3)
	{
		index1 = 0;
		index2 = 0;
		while (av[1][index1] != '\0')
		{
			while (av[2][index2] != '\0')
			{
				if (av[1][index1] == av[2][index2])
				{
					wdc++;
					break ;
				}
				index2++;
			}
			index1++;
		}
		index1 = 0;
		while (av[1][index1] != '\0')
			index1++;
		if (index1 == wdc)
		{
			index2 = 0;
			while (av[1][index2] != '\0')
			{
				write(1, &av[1][index2], 1);
				index2++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}

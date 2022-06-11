/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 13:27:08 by schuah            #+#    #+#             */
/*   Updated: 2022/06/09 13:30:18 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	index1;
	int	index2;
	int	wc;

	if (ac == 3)
	{
		index1 = 0;
		index2 = 0;
		wc = 0;
		while (av[1][index1] != '\0')
		{
			while (av[2][index2] != '\0')
			{
				if (av[1][index1] == av[2][index2])
				{
					wc++;
					break ;
				}
				index2++;
			}
			index1++;
		}
		index1 = 0;
		while (av[1][index1] != '\0')
			index1++;
		if (index1 == wc)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:22:41 by schuah            #+#    #+#             */
/*   Updated: 2022/06/09 11:32:10 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	index;

	index = 0;
	if (ac == 2)
	{
		while (av[1][index] != '\0')
		{
			if (av[1][index] >= 'A' && av[1][index] <= 'Z')
				av[1][index] = 'M' - (av[1][index] - 'N');
			else if (av[1][index] >= 'a' && av[1][index] <= 'z')
				av[1][index] = 'm' - (av[1][index] - 'n');
			write(1, &av[1][index], 1);
			index++;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:13:46 by schuah            #+#    #+#             */
/*   Updated: 2022/06/09 11:20:52 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	index;

	index = 0;
	if (ac == 4)
	{
		while (av[1][index] != '\0')
		{
			if (av[2][1] == '\0' && av[3][1] == '\0')
			{
				if (av[1][index] == av[2][0])
					av[1][index] = av[3][0];
				write(1, &av[1][index], 1);
			}
			index++;
		}
	}
	write(1, "\n", 1);
}

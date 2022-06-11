/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:49:25 by schuah            #+#    #+#             */
/*   Updated: 2022/06/09 15:49:40 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_dup(char *str, char c, int size)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && i < size)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	index1;
	int	i2;

	if (ac == 3)
	{
		while (av[1][index1] != '\0')
			index1++;
		while (av[2][i2] != '\0')
		{
			av[1][index1] = av[2][i2];
			index1++;
			i2++;
		}
		index1 = 0;
		while (av[1][index1] != '\0')
		{
			if (!is_dup(av[1], av[1][index1], i1))
				write(1, &av[1][index1], 1);
			index1++;
		}
	}
	write(1, "\n", 1);
}

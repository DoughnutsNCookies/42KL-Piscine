/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 13:39:55 by schuah            #+#    #+#             */
/*   Updated: 2022/06/09 13:51:29 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int denom;
	int	nb1;
	int	nb2;
	int	max;

	denom = 1;
	if (ac == 3)
	{
		nb1 = atoi(av[1]);
		nb2 = atoi(av[2]);
		while(denom <= nb1 && denom <= nb2)
		{
			if (nb1 % denom == 0 && nb2 % denom == 0)
				max = denom;
			denom++;
		}
		printf("%d", max);
	}
	printf("\n");
}

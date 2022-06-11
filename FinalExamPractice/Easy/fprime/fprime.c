/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:45:23 by schuah            #+#    #+#             */
/*   Updated: 2022/06/09 18:11:33 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_prime(int n)
{
	int	index;

	index = 2;
	while (index < n)
	{
		if (n % index == 0)
			return (0);
		index++;
	}
	return (1);
}

void	fprime(int nb)
{
	int	index;

	index = 2;
	if (nb == 1 || nb == 0)
	{
		printf("%d", nb);
		return ;
	}
	while (index <= nb)
	{
		if (nb % index == 0 && is_prime(index))
		{
			printf("%d", index);
			if (nb != index)
				printf("*");
			nb = nb / index;
			index--;
		}
		index++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
}

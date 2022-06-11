/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 19:35:02 by schuah            #+#    #+#             */
/*   Updated: 2022/06/03 19:39:31 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_map.c"

int	*ft_map(int *tab, int length, int (*f)(int));

int	ft_square(int number)
{
	return (number * number);
}

int	main(void)
{
	int	index;
	int	*tab;
	int	length;
	int	*results;

	length = 10;
	tab = malloc(length * sizeof(int));
	index = 0;
	while (index < length)
	{
		tab[index] = index;
		index++;
	}
	results = ft_map(tab, length, &ft_square);
	index = 0;
	while (index < length)
	{
		printf("ft_map output[%d] = %d\n", index, results[index]);
		index++;
	}
}

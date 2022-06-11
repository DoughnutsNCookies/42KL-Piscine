/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 13:49:09 by schuah            #+#    #+#             */
/*   Updated: 2022/06/04 13:53:14 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_is_sort.c"

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int		ft_less_than(int a, int b)
{
	return (b - a);
}

int		ft_more_than(int a, int b)
{
	return (a - b);
}

int		main(void)
{
	static int	tabx[] = { 1, 2, 2, 2, 3, 3, 4, 5, 6, 6, 6, 6, 7 };
	int			index;
	int			*tab;
	int			length;

	length = 10;
	tab = malloc(length * sizeof(int));
	index = 0;
	while (index < length)
	{
		tab[index] = index;
		index++;
	}
	printf("ft_is_sorted(1 - 10) = %d\n", ft_is_sort(tab, length, &ft_less_than));
	index = 0;
	while (index < length)
	{
		tab[length - 1 - index] = index;
		index++;
	}
	printf("ft_is_sort(10 - 1) = %d\n", ft_is_sort(tab, length, &ft_more_than));
	tab[5] = 100;
	printf("ft_is_sort(10 - 100 - 1) = %d\n", ft_is_sort(tab, length, &ft_more_than));
	tab[5] = 4;
	tab[9] = 100;
	printf("ft_is_sort(10 - 1 -100) = %d\n", ft_is_sort(tab, length, &ft_more_than));
}

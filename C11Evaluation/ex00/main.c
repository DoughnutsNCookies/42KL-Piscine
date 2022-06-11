/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 19:01:14 by schuah            #+#    #+#             */
/*   Updated: 2022/06/03 19:16:31 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_foreach.c"

void	ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putnbr(int nb)
{
	printf("%d", nb);
}

int	main(int ac, char **av)
{
	int	tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	ft_foreach(tab, atoi(av[1]), &ft_putnbr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 13:31:00 by schuah            #+#    #+#             */
/*   Updated: 2022/06/05 14:43:32 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_count_if.c"

int	ft_is_first_x(char *str)
{
	if (*str == 'X')
		return (1);
	return (0);
}

int	main(void)
{
	int		length;
	char	**array;

	length = 5;
	array = malloc(length * sizeof(char *));
	array[0] = "O";
	array[1] = "O";
	array[2] = "X";
	array[3] = "X";
	array[4] = "X";
	printf("ft_count_if(...) = %d\n",
		ft_count_if(array, length, &ft_is_first_x));
}

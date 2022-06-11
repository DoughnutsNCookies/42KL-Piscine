/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 20:01:42 by schuah            #+#    #+#             */
/*   Updated: 2022/06/05 14:41:57 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft_any.c"

int	ft_any(char **tab, int (*f)(char*));

int	ft_function(char *str)
{
	if (*str == 'X')
		return (1);
	return (0);
}

int	main(void)
{
	char	**array;

	array = malloc(5 * sizeof(char *));
	array[0] = "O";
	array[1] = "X";
	array[2] = "O";
	array[3] = "O";
	array[4] = 0;
	printf("ft_any(...) = %d\n", ft_any(array, &ft_function));
}

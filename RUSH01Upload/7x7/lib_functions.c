/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 20:47:42 by schuah            #+#    #+#             */
/*   Updated: 2022/05/29 12:07:51 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "all_function_header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	strings_to_numbs(char *str)
{
	int	index;
	int	nb;

	index = 0;
	nb = 0;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == ' ')
		index++;
	while (str[index] >= '0' && str[index] <= '9')
		nb = nb * 10 + (str[index++] - '0');
	return (nb);
}

int	check_xy(int table[7][7], int pos, int input[49])
{
	if (!left_to_right(table, pos, input))
		return (0);
	if (!right_to_left(table, pos, input))
		return (0);
	if (!down_to_up(table, pos, input))
		return (0);
	if (!up_to_down(table, pos, input))
		return (0);
	return (1);
}

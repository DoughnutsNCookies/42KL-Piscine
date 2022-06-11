/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 20:53:16 by schuah            #+#    #+#             */
/*   Updated: 2022/05/29 12:51:31 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "all_function_header.h"

int	check_valid(int argc, char **argv)
{
	int	counter;

	if (argc != 2)
		return (0);
	counter = 0;
	while (argv[1][counter] != '\0')
		counter++;
	if (counter != 63)
		return (0);
	return (1);
}

int	*get_input(char *str)
{
	int	index1;
	int	index2;
	int	*input;

	input = malloc(4 * 64);
	index1 = 0;
	index2 = 0;
	while (str[index1] != '\0')
	{
		if (str[index1] >= '0' && str[index1] <= '9')
		{
			input[index2] = strings_to_numbs(str + index1);
			index2++;
		}
		index1++;
	}
	return (input);
}

int	solve_puzzle(int table[8][8], int input[64], int pos)
{
	int	index;

	if (pos == 64)
		return (1);
	index = 1;
	while (index <= 8)
	{
		if (check_dupe(table, pos, index))
		{
			table[pos / 8][pos % 8] = index;
			if (check_xy(table, pos, input))
			{
				if (solve_puzzle(table, input, pos + 1))
					return (1);
			}
			else
				table[pos / 8][pos % 8] = 0;
		}
		index++;
	}
	return (0);
}

void	print_result(int table[8][8])
{
	int	index1;
	int	index2;

	index1 = 0;
	while (index1 < 8)
	{
		index2 = 0;
		while (index2 < 8)
		{
			ft_putchar(table[index1][index2] + '0');
			if (index2 != 7)
				ft_putchar(' ');
			index2++;
		}
		ft_putchar('\n');
		index1++;
	}
}

int	main(int argc, char **argv)
{
	int	table[8][8];
	int	*input;
	int	x;
	int	y;

	if (!check_valid(argc, argv))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	input = get_input(argv[1]);
	y = -1;
	while (++y < 8)
	{
		x = -1;
		while (++x < 8)
			table[y][x] = 0;
	}
	if (solve_puzzle(table, input, 0))
		print_result(table);
	else
		write(1, "Error\n", 6);
	free(input);
	return (0);
}

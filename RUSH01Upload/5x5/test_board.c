/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_board.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 20:49:44 by schuah            #+#    #+#             */
/*   Updated: 2022/05/29 12:14:52 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all_function_header.h"

int	check_dupe(int table[5][5], int pos, int test_num)
{
	int	index;

	index = 0;
	while (index < pos / 5)
	{
		if (table[index][pos % 5] == test_num)
			return (0);
		index++;
	}
	index = 0;
	while (index < pos % 5)
	{
		if (table[pos / 5][index] == test_num)
			return (0);
		index++;
	}
	return (1);
}

int	up_to_down(int table[5][5], int pos, int input[16])
{
	int	index;
	int	roof;
	int	views;
	int	target;

	index = 0;
	roof = 0;
	views = 0;
	target = input[pos % 5];
	if (pos / 5 == 4)
	{
		while (index < 5)
		{
			if (table[index][pos % 5] > roof)
			{
				roof = table[index][pos % 5];
				views++;
			}
			index++;
		}
		if (target != views)
			return (0);
	}
	return (1);
}

int	down_to_up(int table[5][5], int pos, int input[25])
{
	int	index;
	int	roof;
	int	views;
	int	target;

	index = 4;
	roof = 0;
	views = 0;
	target = input[5 + pos % 5];
	if (pos / 5 == 4)
	{
		while (index >= 0)
		{
			if (table[index][pos % 5] > roof)
			{
				roof = table[index][pos % 5];
				views++;
			}
			index--;
		}
		if (target != views)
			return (0);
	}
	return (1);
}

int	left_to_right(int table[5][5], int pos, int input[25])
{
	int	index;
	int	roof;
	int	views;
	int	target;

	index = 0;
	roof = 0;
	views = 0;
	target = input[10 + pos / 5];
	if (pos % 5 == 4)
	{
		while (index < 5)
		{
			if (table[pos / 5][index] > roof)
			{
				roof = table[pos / 5][index];
				views++;
			}
			index++;
		}
		if (target != views)
			return (0);
	}
	return (1);
}

int	right_to_left(int table[5][5], int pos, int input[25])
{
	int	index;
	int	roof;
	int	views;
	int	target;

	index = 4;
	roof = 0;
	views = 0;
	target = input[15 + pos / 5];
	if (pos % 5 == 4)
	{
		while (index >= 0)
		{
			if (table[pos / 5][index] > roof)
			{
				roof = table[pos / 5][index];
				views++;
			}
			index--;
		}
		if (target != views)
			return (0);
	}
	return (1);
}

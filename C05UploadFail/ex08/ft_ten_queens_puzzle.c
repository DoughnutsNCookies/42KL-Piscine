/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:00:52 by schuah            #+#    #+#             */
/*   Updated: 2022/05/27 18:09:07 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	test_pos(int board[10], int x, int y)
{
	int	index;

	index = 0;
	while (index < x)
	{
		if (y == board[index])
			return (0);
		if (index + board[index] == x + y)
			return (0);
		if (index - board[index] == x - y)
			return (0);
		index++;
	}
	return (1);
}

void	print_result(int *result, int board[10])
{
	int	index2;

	index2 = 0;
	*result += 1;
	index2 = 0;
	while (index2 < 10)
	{
		ft_putchar(board[index2] + 48);
		index2++;
	}
	ft_putchar('\n');
}

void	try_queens_comb(int board[10], int *result, int pos)
{
	int	index;

	if (pos == 10)
	{
		print_result(result, board);
	}
	else
	{
		index = 0;
		while (index < 10)
		{
			if (test_pos(board, pos, index))
			{
				board[pos] = index;
				try_queens_comb(board, result, pos + 1);
			}
			index++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	index;
	int	result;

	index = 0;
	while (index < 10)
	{
		board[index] = 0;
		index++;
	}
	result = 0;
	try_queens_comb(board, &result, 0);
	return (result);
}

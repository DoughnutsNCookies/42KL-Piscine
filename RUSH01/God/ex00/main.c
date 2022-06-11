/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 12:18:13 by maliew            #+#    #+#             */
/*   Updated: 2022/05/29 14:05:33 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "functions.h"

/*
 * displays the 2D array
 * 
 * board:		2D array
 * board_size:	size of the 2D array (board_size * board_size)
 */
void	display(int **board, int board_size)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (++i <= board_size)
	{
		j = 0;
		while (++j <= board_size)
		{
			c = board[i][j] + '0';
			write(1, &c, 1);
			if (j == board_size)
			{
				write(1, "\n", 1);
			}
			else
			{
				write(1, " ", 1);
			}
		}
	}
}

/*
 * performs a series of checks to the 2D array
 * to ensure the current state of the board is valid
 * 
 * check_right only runs at the end of each row
 * check_bottom only runs at the end of each column
 * 
 * board:		2D array
 * pos_x:		current row to check
 * pos_y:		current column to check
 * board_size: 	size of the 2D array (board_size * board_size)
 * 
 * returns: 0 if any checks fail, 1 if all checks passes
 */
int	check(int **board, int pos_x, int pos_y, int board_size)
{
	if (check_double_row(board, pos_x, board_size) == 0)
		return (0);
	if (check_double_col(board, pos_y, board_size) == 0)
		return (0);
	if (check_top(board, pos_y, board_size) == 0)
		return (0);
	if (check_left(board, pos_x, board_size) == 0)
		return (0);
	if (pos_y == board_size)
	{
		if (check_right(board, pos_x, board_size) == 0)
			return (0);
	}
	if (pos_x == board_size)
	{
		if (check_bottom(board, pos_y, board_size) == 0)
			return (0);
	}
	return (1);
}

/*
 * gets the size required for the 2D array based on the input
 * 
 * input:	the string containing the puzzle to solve
 * 
 * returns: the size of the board, or 0 if the input is invalid
 */
int	get_board_size(char *input)
{
	int	count;

	count = 0;
	while (input[count] != '\0')
	{
		++count;
	}
	if (count == 31)
		return (4);
	else if (count == 39)
		return (5);
	else if (count == 47)
		return (6);
	else if (count == 55)
		return (7);
	else if (count == 63)
		return (8);
	else if (count == 71)
		return (9);
	else
		return (0);
}

/*
 * main recursive function to solve the board
 * 
 * loops through all possible numbers (1 to board_size) in board[pos_x][pos_y]
 * 
 * if the current state of the board passes all checks
 * it goes to the next position in the board
 * 
 * if all possible numbers fail the checks
 * it backtracks to the previous position and continues the next possible number
 * 
 * board:		2D array
 * pos_x:		current row position
 * pos_y:		current column position
 * board_size: 	size of the 2D array (board_size * board_size)
 * 
 * returns: 1 if a solution is found, 0 if all possible numbers are invalid
 */
int	solve(int **board, int pos_x, int pos_y, int board_size)
{
	int	num;

	if (pos_x == board_size + 1)
	{
		display(board, board_size);
		return (1);
	}
	num = 0;
	while (++num <= board_size)
	{
		board[pos_x][pos_y] = num;
		if (check(board, pos_x, pos_y, board_size))
		{
			if (pos_y == board_size)
			{
				if (solve(board, pos_x + 1, 1, board_size))
					return (1);
			}
			else
				if (solve(board, pos_x, pos_y + 1, board_size))
					return (1);
		}
		board[pos_x][pos_y] = 0;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	**board;
	int	board_size;
	int	pos_x;
	int	pos_y;
	int	i;

	if (check_argc(argc) == 0)
		return (0);
	pos_x = 1;
	pos_y = 1;
	board_size = get_board_size(argv[1]);
	if (check_board_size(board_size) == 0 || check_input(argv[1]) == 0)
		return (0);
	board = (int **)malloc((board_size + 2) * sizeof(int *));
	i = -1;
	while (++i < (board_size + 2))
	{
		board[i] = (int *)malloc((board_size + 2) * sizeof(int));
	}
	setup(board, argv[1], board_size);
	if (solve(board, pos_x, pos_y, board_size) == 0)
	{
		write(1, "Error\n", 6);
	}
	return (0);
}

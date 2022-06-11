/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rules.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 12:21:16 by maliew            #+#    #+#             */
/*   Updated: 2022/05/29 14:06:58 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * checks the current column 
 * current number of visible boxes < given number
 * 
 * board:		2D array
 * pos_y:		current column to check
 * board_size: 	size of the 2D array (board_size * board_size)
 *
 * returns: 0 if fails, 1 if passes
 */
int	check_top(int **board, int pos_y, int board_size)
{
	int	i;
	int	temp;
	int	count;

	i = 0;
	temp = 0;
	count = 0;
	while (++i <= board_size)
	{
		if (board[i][pos_y] > temp)
		{
			temp = board[i][pos_y];
			count++;
		}
	}
	if (count > board[0][pos_y])
	{
		return (0);
	}
	return (1);
}

/*
 * checks the current column (reversed)
 * current number of visible boxes = given number
 * 
 * board:		2D array
 * pos_y:		current column to check
 * board_size: 	size of the 2D array (board_size * board_size)
 *
 * returns: 0 if fails, 1 if passes
 */
int	check_bottom(int **board, int pos_y, int board_size)
{
	int	i;
	int	temp;
	int	count;

	i = board_size + 1;
	temp = 0;
	count = 0;
	while (--i >= 1)
	{
		if (board[i][pos_y] > temp)
		{
			temp = board[i][pos_y];
			count++;
		}
	}
	if (count != board[board_size + 1][pos_y])
	{
		return (0);
	}
	return (1);
}

/*
 * checks the current row
 * current number of visible boxes < given number
 * 
 * board:		2D array
 * pos_x:		current row to check
 * board_size: 	size of the 2D array (board_size * board_size)
 *
 * returns: 0 if fails, 1 if passes
 */
int	check_left(int **board, int pos_x, int board_size)
{
	int	i;
	int	temp;
	int	count;

	i = 0;
	temp = 0;
	count = 0;
	while (++i <= board_size)
	{
		if (board[pos_x][i] > temp)
		{
			temp = board[pos_x][i];
			count++;
		}
	}
	if (count > board[pos_x][0])
	{
		return (0);
	}
	return (1);
}

/*
 * checks the current row (reversed) 
 * current number of visible boxes = given number
 * 
 * board:		2D array
 * pos_x:		current row to check
 * board_size: 	size of the 2D array (board_size * board_size)
 *
 * returns: 0 if fails, 1 if passes
 */
int	check_right(int **board, int pos_x, int board_size)
{
	int	i;
	int	temp;
	int	count;

	i = board_size + 1;
	temp = 0;
	count = 0;
	while (--i >= 1)
	{
		if (board[pos_x][i] > temp)
		{
			temp = board[pos_x][i];
			count++;
		}
	}
	if (count != board[pos_x][board_size + 1])
	{
		return (0);
	}
	return (1);
}

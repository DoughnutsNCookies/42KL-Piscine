/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 12:35:56 by maliew            #+#    #+#             */
/*   Updated: 2022/05/29 13:55:18 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * checks for duplicated numbers based on the current row
 * 
 * board:		2D array
 * pos_x:		current row to check
 * board_size: 	size of the 2D array (board_size * board_size)
 * 
 * returns: 0 if duplicated numbers are found, 1 if none are found
 */
int	check_double_row(int **board, int pos_x, int board_size)
{
	int	i;
	int	j;

	i = 0;
	while (++i <= board_size)
	{
		j = i;
		while (++j <= board_size)
		{
			if (board[pos_x][i] == board[pos_x][j] && board[pos_x][i] != 0)
			{
				return (0);
			}
		}
	}
	return (1);
}

/*
 * checks for duplicated numbers based on the current column
 * 
 * board:		2D array
 * pos_y:		current column to check
 * board_size: 	size of the 2D array (board_size * board_size)
 * 
 * returns: 0 if duplicated numbers are found, 1 if none are found
 */
int	check_double_col(int **board, int pos_y, int board_size)
{
	int	i;
	int	j;

	i = 0;
	while (++i <= board_size)
	{
		j = i;
		while (++j <= board_size)
		{
			if (board[i][pos_y] == board[j][pos_y] && board[i][pos_y] != 0)
			{
				return (0);
			}
		}
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 12:51:26 by maliew            #+#    #+#             */
/*   Updated: 2022/05/29 14:05:39 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * inputs the puzzle into the board
 * 
 * board:		2D array
 * input:		the string containing the puzzle to solve
 * board_size: 	size of the 2D array (board_size * board_size)
 * input_count:	the current position of the input string
 */
void	setup_2(int **board, char *input, int board_size, int input_count)
{
	int	board_count;

	board_count = 0;
	while (++board_count <= board_size)
	{
		board[board_count][0] = input[input_count] - 48;
		input_count += 2;
	}
	board_count = 0;
	while (++board_count <= board_size)
	{
		board[board_count][board_size + 1] = input[input_count] - 48;
		input_count += 2;
	}
}

/*
 * inputs the puzzle into the board
 * 
 * board:		2D array
 * input:		the string containing the puzzle to solve
 * board_size: 	size of the 2D array (board_size * board_size)
 */
void	setup(int **board, char *input, int board_size)
{
	int	board_count;
	int	input_count;

	input_count = 0;
	board_count = 0;
	while (++board_count <= board_size)
	{
		board[0][board_count] = input[input_count] - 48;
		input_count += 2;
	}
	board_count = 0;
	while (++board_count <= board_size)
	{
		board[board_size + 1][board_count] = input[input_count] - 48;
		input_count += 2;
	}
	setup_2(board, input, board_size, input_count);
}

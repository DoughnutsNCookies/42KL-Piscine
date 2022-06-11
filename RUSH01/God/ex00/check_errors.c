/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 12:56:39 by maliew            #+#    #+#             */
/*   Updated: 2022/05/29 14:03:00 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * checks if argc is 2
 * writes error message if fails
 * 
 * argc:	argc from main function
 *
 * returns: 0 if fails, 1 if passes
 */
int	check_argc(int argc)
{
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}

/*
 * checks if board_size is valid (not 0)
 * writes error message if fails
 * 
 * board_size:	size of the 2D array (board_size * board_size)
 *
 * returns: 0 if fails, 1 if passes
 */
int	check_board_size(int board_size)
{
	if (board_size == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}

/*
 * checks if input is valid
 * it must contain only single digits with spaces between them
 * writes error message if fails
 * 
 * input:	the string containing the puzzle to solve
 *
 * returns: 0 if fails, 1 if passes
 */
int	check_input(char *input)
{
	int	i;

	i = -1;
	while (input[++i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (input[i] < '0' || input[i] > '9')
			{
				write(1, "Error\n", 6);
				return (0);
			}
		}
		else
		{
			if (input[i] != ' ')
			{
				write(1, "Error\n", 6);
				return (0);
			}
		}
	}
	return (1);
}

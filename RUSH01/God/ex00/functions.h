/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 12:29:21 by maliew            #+#    #+#             */
/*   Updated: 2022/05/29 13:05:04 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

int		check_top(int **board, int pos_y, int board_size);
int		check_bottom(int **board, int pos_y, int board_size);
int		check_left(int **board, int pos_x, int board_size);
int		check_right(int **board, int pos_x, int board_size);
int		check_double_row(int **board, int pos_x, int board_size);
int		check_double_col(int **board, int pos_y, int board_size);

int		check_argc(int argc);
int		check_board_size(int board_size);
int		check_input(char *input);

void	setup(int **board, char *input, int board_size);

#endif
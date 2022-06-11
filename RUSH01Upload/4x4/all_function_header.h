/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_function_header.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:12:44 by schuah            #+#    #+#             */
/*   Updated: 2022/05/29 11:41:43 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALL_FUNCTION_HEADER_H
# define ALL_FUNCTION_HEADER_H

void	ft_putchar(char c);
int		ft_strlen(char *str);
int		strings_to_numbs(char *str);
int		check_valid(int argc, char **argv);
int		check_dupe(int table[4][4], int pos, int test_num);
int		up_to_down(int table[4][4], int pos, int input[16]);
int		right_to_left(int table[4][4], int pos, int input[16]);
int		down_to_up(int table[4][4], int pos, int input[16]);
int		left_to_right(int table[4][4], int pos, int input[16]);
int		check_xy(int table[4][4], int pos, int input[16]);
int		*get_input(char *str);
int		solve_puzzle(int table[4][4], int input[16], int pos);
void	print_result(int table[4][4]);
int		main(int argc, char **argv);

#endif

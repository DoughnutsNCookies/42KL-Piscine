/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_function_header.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:12:44 by schuah            #+#    #+#             */
/*   Updated: 2022/05/29 12:36:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALL_FUNCTION_HEADER_H
# define ALL_FUNCTION_HEADER_H

void	ft_putchar(char c);
int		ft_strlen(char *str);
int		strings_to_numbs(char *str);
int		check_valid(int argc, char **argv);
int		check_dupe(int table[5][5], int pos, int test_num);
int		up_to_down(int table[5][5], int pos, int input[25]);
int		right_to_left(int table[5][5], int pos, int input[25]);
int		down_to_up(int table[5][5], int pos, int input[25]);
int		left_to_right(int table[5][5], int pos, int input[25]);
int		check_xy(int table[5][5], int pos, int input[25]);
int		*get_input(char *str);
int		solve_puzzle(int table[5][5], int input[25], int pos);
void	print_result(int table[5][5]);
int		main(int argc, char **argv);

#endif

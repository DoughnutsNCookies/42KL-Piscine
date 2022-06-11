/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 14:12:06 by schuah            #+#    #+#             */
/*   Updated: 2022/06/04 16:56:50 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nbr);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		add(int a, int b);
int		minus(int a, int b);
int		times(int a, int b);
int		divide(int a, int b);
int		modulus(int a, int b);

#endif

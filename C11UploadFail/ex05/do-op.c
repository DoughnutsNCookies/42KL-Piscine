/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 14:08:29 by schuah            #+#    #+#             */
/*   Updated: 2022/06/05 13:16:35 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int	is_operator(char *str)
{
	if (str[0] == '\0' || str[1] != '\0')
		return (0);
	if (*str == '+' || *str == '-' || *str == '*' || *str == '/' || *str == '%')
		return (1);
	return (0);
}

char	get_operator(char *str)
{
	if (*str == '+')
		return ('+');
	if (*str == '-')
		return ('-');
	if (*str == '*')
		return ('*');
	if (*str == '/')
		return ('/');
	if (*str == '%')
		return ('%');
	return ('X');
}

void	doop(int nb1, int nb2, char operator)
{
	int			output;
	int			index;
	static char	list_operators[5] = {'+', '-', '*', '/', '%'};
	static int	(*lf[5])(int, int) = {&add, &minus, &times, &divide, &modulus};

	output = 0;
	index = -1;
	while (++index < 5)
		if (operator == list_operators[index])
			output = (lf[index])(nb1, nb2);
	ft_putnbr(output);
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	int		nb1;
	char	operator;
	int		nb2;

	if (ac == 4)
	{
		nb1 = ft_atoi(av[1]);
		operator = get_operator(av[2]);
		nb2 = ft_atoi(av[3]);
		printf("%d, %d, %c", nb1, nb2, operator);
		if (operator == 'X'
			|| ((operator == '/' || operator == '%') && nb2 == 0))
		{
			if (operator == '/')
				write(1, "Stop : division by zero\n", 24);
			else if (operator == '%')
				write(1, "Stop : modulo by zero\n", 22);
			else if (operator == 'X')
				write(1, "0\n", 2);
			return (0);
		}
		printf("%d, %d, %c", nb1, nb2, operator);
		doop(nb1, nb2, operator);
	}
	return (0);
}

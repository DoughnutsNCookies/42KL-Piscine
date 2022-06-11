/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:51:36 by schuah            #+#    #+#             */
/*   Updated: 2022/06/09 16:34:47 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	return (c == ' ');
}

int	is_small(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_big(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	is_alpha(char c)
{
	return (is_small(c) || is_big(c));
}

int	is_alphanumeric(char c)
{
	return (is_alpha(c) || (c >= '0' && c <= '9'));
}

void	rstr_capitalizer(char *str)
{
	int	index;
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	index = 0;
	while (str[index] != '\0')
	{
		while (is_space(str[index]))
			index++;
		while (is_alphanumeric(str[index]) && !is_space(str[index + 1]) && index < length - 1)
		{
			if (is_big(str[index]))
				str[index] += 32;
			index++;
		}
		if (is_alpha(str[index]))
		{
			if(is_small(str[index]))
				str[index] -= 32;
		}
		index++;
	}
	length = 0;
	while (str[length] != '\0')
	{
		write(1, &str[length], 1);
		length++;
	}
}

int	main(int ac, char **av)
{
	int	index;

	index = 1;
	while (ac > 1)
	{
		rstr_capitalizer(av[index]);
		write(1, "\n", 1);
		ac--;
		index++;
	}
	return (0);
}

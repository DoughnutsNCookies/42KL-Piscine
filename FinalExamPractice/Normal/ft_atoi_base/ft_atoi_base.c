/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 13:06:55 by schuah            #+#    #+#             */
/*   Updated: 2022/06/09 13:21:12 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(const char *str, int str_base)
{
	int	index;
	int value;
	int	output;
	int	length;

	index = 0;
	value = 1;
	output = 0;
	if (str[index] == '-')
	{
		value = -1;
		index++;
	}
	while (str[index] != '\0')
	{
		output *= str_base;
		if (str[index] >= '0' && str[index] <= '9')
			output += str[index] - 48;
		else if (str[index] >= 'A' && str[index] <= 'Z')
			output += str[index] - 55;
		else if (str[index] >= 'a' && str[index] <= 'z')
			output += str[index] - 87;
		index++;
	}
	return (output * value);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	printf("%d", ft_atoi_base(av[1], 16));
}

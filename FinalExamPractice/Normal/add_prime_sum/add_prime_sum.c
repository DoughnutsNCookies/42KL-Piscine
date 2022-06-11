/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:11:55 by schuah            #+#    #+#             */
/*   Updated: 2022/06/09 12:51:01 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	index;
	int	value;
	int	output;

	output = 0;
	value = 1;
	index = 0;
	while (str[index] == ' ' || str[index] == '\n' || str[index] == '\t')
		index++;
	if (str[index] == '-')
	{
		value = -1;
		index++;
	}
	else if (str[index] == '+')
	{
		value = 1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9' && str[index] != '\0')
	{
		output = output * 10 + str[index] - 48;
		index++;
	}
	return(output * value);
}

int	is_prime(int n)
{
	int	index;

	index = 2;
	while (index < n)
	{
		if (n % index == 0)
			return (0);
		index++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int		index;
	int		nb;
	int		output;

	output = 0;
	index = 2;
	if (ac != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	nb = ft_atoi(av[1]);
	if (nb > 0)
	{
		while (index <= nb)
		{
			if (is_prime(index))
				output += index;
			index++;
		}
		printf("%d", output);
		return (0);
	}
	write(1, "0\n", 2);
	return (0);
}

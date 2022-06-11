/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:56:01 by schuah            #+#    #+#             */
/*   Updated: 2022/05/22 16:10:31 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush03(int x, int y);

int	convert(char string[])
{
	int	num;
	int	index;
	int	stringlength;

	num = 0;
	index = 0;
	stringlength = 0;
	while (string[index] != '\0')
	{
		stringlength++;
		index++;
	}
	index = 0;
	while (index < stringlength)
	{
		num = num * 10 + (string[index] - 48);
		index++;
	}
	return (num);
}

int	main(int argc, char*argv[])
{
	int	x;
	int	y;

	(void)argc;
	x = convert(argv[1]);
	y = convert(argv[2]);
	rush03(x, y);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:09:56 by schuah            #+#    #+#             */
/*   Updated: 2022/06/09 11:12:20 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	length;

	length = 0;
	if (ac == 2)
	{
		while (av[1][length] != '\0')
			length++;
		length--;
		while (av[1][length] != '\0')
		{
			write(1, &av[1][length], 1);
			length--;
		}
	}
	write(1, "\n", 1);
}

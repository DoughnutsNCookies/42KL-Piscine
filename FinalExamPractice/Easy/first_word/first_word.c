/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:33:11 by schuah            #+#    #+#             */
/*   Updated: 2022/06/09 10:38:19 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int	main(int ac, char **av)
{
	int	index;

	index = 0;
	if (ac == 2)
	{
		while (is_space(av[1][index]))
			index++;
		while (!is_space(av[1][index]) && av[1][index] != '\0')
		{
			write(1, &av[1][index], 1);
			index++;
		}
	}
}

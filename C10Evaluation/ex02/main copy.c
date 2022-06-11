/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:07:03 by schuah            #+#    #+#             */
/*   Updated: 2022/06/07 11:16:31 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
/*
char	**two_args(int *ac, char **av, int *byte)
{
	int		index;
	char	**output_av;

	*byte = 0;
	index = 1;
	while (av[1][++index] && av[1][index] >= '0' && av[1][index] <= '9')
		*byte = *byte * 10 + (av[1][index] - '0');
	if (*ac > 2)
	{
		output_av = malloc(sizeof(char *) * *ac);
		output_av[0] = av[0];
		index = 1;
		while (++index < *ac)
			output_av[index - 1] = ft_strdup(av[index]);
		output_av[index - 1] = 0;
		*ac += 1;
		return (output_av);
	}
	output_av = malloc(sizeof(char *) * 2);
	output_av[0] = av[0];
	output_av[1] = "stdin";
	fp_stdin(*byte, output_av);
	return (0);
}
*/
char	**three_args(int ac, char **av, int byte)
{
	int		index;
	char	**output_av;

	if (ac > 3)
	{
		output_av = malloc(sizeof(char *) * (ac - 1));
		output_av[0] = av[0];
		index = 2;
		while (++index < ac)
			output_av[index - 2] = ft_strdup(av[index]);
		output_av[index - 2] = 0;
	}
	else
	{
		output_av = malloc(sizeof(char *) * 2);
		output_av[0] = av[0];
		output_av[1] = "stdin";
		fp_stdin(byte, output_av);
		return (0);
	}
	return (output_av);
}

int	main(int ac, char **av)
{
	int			byte;
	char		**output_av;

	if (ac == 1 || av[1][0] != '-' || av[1][1] != 'c')
		freeplay(av);
	else if (av[1][0] == '-' && av[1][1] == 'c')
	{
		if (ac == 2)
		{
			print_usage(av[0]);
			return (0);
		}
		byte = ft_atoi(av[2]);
		/*
		if (av[1][2] != '\0')
			output_av = two_args(&ac, av, &byte);
			*/
		if (byte != -1)
			output_av = three_args(ac, av, byte);
		else
		{
			print_io(av[0], av[2]);
			return (0);
		}
		if (output_av != 0)
			print_fd(ac, output_av, byte);
	}
}

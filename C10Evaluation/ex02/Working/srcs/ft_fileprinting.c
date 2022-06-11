/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fileprinting.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:58:45 by schuah            #+#    #+#             */
/*   Updated: 2022/06/07 11:10:43 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	pull_one(char *str, int size)
{
	int		index;

	index = 1;
	while (index < size)
	{
		str[index - 1] = str[index];
		index++;
	}
}

void	print_fd(int ac, char **output_av, int byte)
{
	int		index1;
	int		index2;

	index1 = 1;
	index2 = 0;
	while (output_av[index1] != 0)
	{
		if (count_file(output_av[index1]) == -1)
		{
			if (errno != 21)
				print_errno(output_av, index1);
		}
		else
		{
			if (ac > 4)
			{
				if (index1 != 1 && index2++ != 0)
					ft_putchar(1, '\n');
				ft_title(output_av[index1]);
				index2++;
			}
			get_file(output_av[index1], count_file(output_av[index1]), byte);
		}
		index1++;
	}
}

void	print_errno(char **output_av, int index)
{
	ft_putstr(2, basename(output_av[0]));
	ft_putstr(2, ": ");
	ft_putstr(2, output_av[index]);
	ft_putstr(2, ": ");
	ft_putstr(2, strerror(errno));
	ft_putchar(2, '\n');
}

void	print_io(char *name, char *off)
{
	ft_putstr(2, basename(name));
	ft_putstr(2, ": illegal offset -- ");
	ft_putstr(2, off);
	ft_putchar(2, '\n');
}

void	print_usage(char *name)
{
	ft_putstr(2, basename(name));
	ft_putstr(2, ": option require an argument -- c\nusage: ");
	ft_putstr(2, basename(name));
	ft_putstr(2, " [-F | -f | -r] [-q] [-b # | -c # | -n #] [file ...]\n");
}

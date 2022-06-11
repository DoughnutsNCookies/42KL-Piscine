/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:06:15 by schuah            #+#    #+#             */
/*   Updated: 2022/06/09 19:23:27 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	freeplay(char **av)
{
	char	c;

	if (errno != 0)
	{
		ft_putstr(basename(av[0]), 2);
		ft_putstr(": stdin: ", 2);
		ft_putstr(strerror(errno), 2);
		ft_putchar('\n', 2);
		return ;
	}
	while (read(0, &c, 1))
		write(1, &c, 1);
}

int	ft_read(char *path)
{
	int		fileinfo;
	int		size;
	char	txt[30000];

	fileinfo = open(path, O_RDWR);
	if (fileinfo != -1)
	{
		size = read(fileinfo, txt, 30000);
		while (size != 0)
		{
			ft_puttxt(txt, size);
			size = read(fileinfo, txt, 30000);
		}
		return (1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	index;

	if (ac < 2)
		freeplay(av);
	index = 0;
	while (++index < ac)
	{
		if (!ft_read(av[index]))
		{
			ft_putstr(basename(av[0]), 2);
			ft_putstr(": ", 2);
			ft_putstr(av[index], 2);
			ft_putstr(": ", 2);
			ft_putstr(strerror(errno), 2);
			ft_putchar('\n', 2);
		}
	}
}

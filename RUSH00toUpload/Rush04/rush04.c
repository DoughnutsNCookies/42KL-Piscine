/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:59:22 by schuah            #+#    #+#             */
/*   Updated: 2022/05/22 16:11:17 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char character);

void	ft_printfirstline(int x, int spaces)
{
	char	corner1;
	char	corner2;
	char	dash;

	corner1 = 'A';
	corner2 = 'C';
	dash = 'B';
	ft_putchar(corner1);
	while (spaces > 0)
	{
		ft_putchar(dash);
		spaces--;
	}
	if (x > 1)
	{
		ft_putchar(corner2);
	}
}

void	ft_printlastline(int x, int y, int spaces)
{
	char	corner1;
	char	corner2;
	char	dash;

	corner1 = 'C';
	corner2 = 'A';
	dash = 'B';
	if (y > 1)
	{
		ft_putchar(corner1);
		while (spaces > 0)
		{
			ft_putchar(dash);
			spaces--;
		}
		if (x > 1)
		{
			ft_putchar(corner2);
		}
	}
}

void	ft_printbody(int x, int y, int spaces, int headandtail)
{
	char	pipe;
	char	space;
	char	newline;

	pipe = 'B';
	space = ' ';
	newline = '\n';
	while (y > 2)
	{
		ft_putchar(pipe);
		while (spaces > 0)
		{
			ft_putchar(space);
			spaces--;
		}
		if (x > 1)
		{
			ft_putchar(pipe);
		}
		y--;
		ft_putchar(newline);
		spaces = x - headandtail;
	}
}

void	rush04(int x, int y)
{
	int		spaces;
	int		headandtail;
	char	newline;

	headandtail = 2;
	spaces = x - headandtail;
	newline = '\n';
	if (x > 0 && y > 0)
	{
		ft_printfirstline(x, spaces);
		ft_putchar(newline);
		ft_printbody(x, y, spaces, headandtail);
		ft_printlastline(x, y, spaces);
	}
}

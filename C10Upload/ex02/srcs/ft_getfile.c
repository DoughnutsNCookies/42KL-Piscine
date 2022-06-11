/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getfile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:05:24 by schuah            #+#    #+#             */
/*   Updated: 2022/06/07 11:00:58 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	freeplay(char **argv)
{
	char	buf;

	while (read(0, &buf, 1) != 0)
	{
		if (errno != 0)
		{
			ft_putstr(2, basename(argv[0]));
			ft_putstr(2, ": stdin: ");
			ft_putstr(2, strerror(errno));
			ft_putchar(2, '\n');
			return ;
		}
	}
}

void	fp_stdin(int size, char **args)
{
	int		index;
	char	c[1];
	char	*buf;

	buf = malloc_buf(size);
	index = 0;
	while (read(0, c, 1) != 0)
	{
		if (errno == 0)
		{
			if (index >= size)
				pull_one(buf, size);
			else
				index++;
			buf[index - 1] = c[0];
		}
		else
		{
			print_errno(args, 1);
			return ;
		}
	}
	index = -1;
	while (++index < size && buf[index])
		ft_putchar(1, buf[index]);
}

char	*malloc_buf(int size)
{
	char	*buf;

	buf = malloc(sizeof(char) * (size + 1));
	if (buf == NULL)
		return (NULL);
	return (buf);
}

int	count_file(char *dir)
{
	int		fileinfo;
	int		size;
	int		byte;
	char	buf[BUF];

	fileinfo = open(dir, O_RDWR);
	if (fileinfo != -1)
	{
		byte = 0;
		size = read(fileinfo, buf, BUF);
		while (size != 0)
		{
			byte += size;
			size = read(fileinfo, buf, BUF);
		}
		return (byte);
	}
	else
		return (-1);
}

void	get_file(char *dir, int byte, int size)
{
	int		index;
	int		bufsize;
	int		fileinfo;
	char	buf[BUF];

	fileinfo = open(dir, O_RDWR);
	index = 0;
	bufsize = read(fileinfo, buf, BUF);
	while (bufsize != 0 && ((index + 1) * BUF < byte - size))
	{
		index++;
		bufsize = read(fileinfo, buf, BUF);
	}
	if (size >= byte)
		index = -1;
	else
		index = (byte - size) - (index * BUF) - 1;
	while (++index < BUF && index < bufsize)
		ft_putchar(1, buf[index]);
	bufsize = read(fileinfo, buf, BUF);
	while (bufsize != 0)
	{
		ft_putstr_limited(buf, bufsize);
		bufsize = read(fileinfo, buf, BUF);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:40:42 by schuah            #+#    #+#             */
/*   Updated: 2022/06/04 16:51:01 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	int		fileinfo;
	char	*txt;

	if (ac <= 1)
		write(1, "File name missing.\n", 19);
	else if (ac > 2)
		write(1, "Too many arguments.\n", 20);
	else
	{
		fileinfo = open(av[1], O_RDONLY);
		if (fileinfo == -1)
			write(1, "Cannot read file.\n", 18);
		else
		{
			while (read(fileinfo, &txt, 1))
				write(1, &txt, 1);
		}
		close(fileinfo);
	}
	return (0);
}

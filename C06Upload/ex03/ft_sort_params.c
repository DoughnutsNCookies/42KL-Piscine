/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:51:26 by schuah            #+#    #+#             */
/*   Updated: 2022/05/30 10:15:40 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strncmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' || s2[index] != '\0')
	{
		if (s1[index] < s2[index])
			return (-1);
		if (s1[index] > s2[index])
			return (1);
		index++;
	}
	return (0);
}

void	sort(int argc, char **argv)
{
	int		index;
	int		index2;
	char	*tmp;

	index = 1;
	while (index < argc - 1)
	{
		index2 = index + 1;
		while (index2 < argc)
		{
			if (ft_strncmp(argv[index], argv[index2]) > 0)
			{
				tmp = argv[index];
				argv[index] = argv[index2];
				argv[index2] = tmp;
			}
			index2++;
		}
		index++;
	}
}

int	main(int argc, char **argv)
{
	int	index;
	int	index2;

	sort(argc, argv);
	index = 1;
	while (index < argc)
	{
		index2 = 0;
		while (argv[index][index2])
		{
			ft_putchar(argv[index][index2]);
			index2++;
		}
		ft_putchar('\n');
		index++;
	}
	return (0);
}

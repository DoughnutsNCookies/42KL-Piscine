/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:34:57 by schuah            #+#    #+#             */
/*   Updated: 2022/05/26 19:44:38 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	index;
	int	index2;

	index = argc - 1;
	while (index > 0)
	{
		index2 = 0;
		while (argv[index][index2] != '\0')
		{
			ft_putchar(argv[index][index2]);
			index2++;
		}
		ft_putchar('\n');
		index--;
	}
	return (0);
}

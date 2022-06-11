/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:39:48 by schuah            #+#    #+#             */
/*   Updated: 2022/06/09 11:08:34 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_char(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	main(int ac, char **av)
{
	int 	index;
	int		written;
	int		counter;
	char	*small;
	char	*big;

	small = "abcdefghijklmnopqrstuvwxyz";
	big = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	written = 0;
	if (ac == 2)
	{
		while (av[1][index] != '\0')
		{
			counter = 0;
			while (small[counter] != '\0')
			{
				if (av[1][index] == small[counter] || av[1][index] == big[counter])
				{
					while (counter >= 0)
					{
						write(1, &av[1][index], 1);
						counter--;
						written = 1;
					}
					index++;
				}
				counter++;
			}
			if (written == 0)
			{
				write(1, &av[1][index], 1);
				index++;
			}
			written = 0;
		}
	}
	write(1, "\n", 1);
}

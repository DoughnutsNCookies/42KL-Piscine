/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 19:01:12 by schuah            #+#    #+#             */
/*   Updated: 2022/06/09 19:17:04 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_blank(char c)
{
	return (c == ' ');
}

void	rev_wstr(char *str)
{
	int	wc = 0;
	int	index = 0;
	int	len;
	int	a;

	while (s[index])
		if (!ft_isblank(s[index++]) && (!wc || ft_isblank(s[i - 2])))
			++wc;
	while (s[--index])
	{
		if (!ft_isblank(s[index]) && wc--)
		{
			a = 0;
			len = 1;
			while (s[index - 1] && !ft_isblank(s[index - 1]) && ++len)
				--i;
			while (len-- && write(1, &s[index + a++], 1));
			(wc) ? write(1, " ", 1) : 0;
		}
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	write(1, "\n", 1);
}

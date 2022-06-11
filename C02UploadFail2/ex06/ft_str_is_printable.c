/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:33:22 by schuah            #+#    #+#             */
/*   Updated: 2022/05/25 12:28:31 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		index;
	int		isprintable;
	char	current;

	isprintable = 1;
	index = 0;
	while (str[index] != '\0')
	{
		current = str[index];
		if (current == '\0')
			return (0);
		if (current >= 32 && current <= 127)
			isprintable = 1;
		else
			return (0);
		index++;
	}
	return (isprintable);
}

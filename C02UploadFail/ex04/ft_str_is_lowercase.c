/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:12:11 by schuah            #+#    #+#             */
/*   Updated: 2022/05/24 13:20:01 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		index;
	int		issmall;
	char	current;

	issmall = 1;
	index = 0;
	while (str[index] != '\0')
	{
		current = str[index];
		if (current == '\0')
			return (0);
		if (current >= 'a' && current <= 'z')
			issmall = 1;
		else
			return (0);
		index++;
	}
	return (issmall);
}

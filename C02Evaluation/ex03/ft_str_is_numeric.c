/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:58:30 by schuah            #+#    #+#             */
/*   Updated: 2022/05/24 13:20:46 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		index;
	int		isnumeric;
	char	current;

	isnumeric = 1;
	index = 0;
	while (str[index] != '\0')
	{
		current = str[index];
		if (current == '\0')
			return (0);
		if (current >= '0' && current <= '9')
			isnumeric = 1;
		else
			return (0);
		index++;
	}
	return (isnumeric);
}

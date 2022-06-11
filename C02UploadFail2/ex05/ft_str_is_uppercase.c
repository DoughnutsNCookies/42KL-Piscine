/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:19:24 by schuah            #+#    #+#             */
/*   Updated: 2022/05/24 13:22:37 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		index;
	int		isbig;
	char	current;

	isbig = 1;
	index = 0;
	while (str[index] != '\0')
	{
		current = str[index];
		if (current == '\0')
			return (0);
		if (current >= 'A' && current <= 'Z')
			isbig = 1;
		else
			return (0);
		index++;
	}
	return (isbig);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:17:58 by schuah            #+#    #+#             */
/*   Updated: 2022/05/24 14:20:54 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		index;
	char	current;

	index = 0;
	while (str[index] != '\0')
	{
		current = str[index];
		if (current >= 'A' && current <= 'Z')
			str[index] = current + 32;
		index++;
	}
	return (str);
}

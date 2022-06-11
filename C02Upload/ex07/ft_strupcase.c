/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:53:57 by schuah            #+#    #+#             */
/*   Updated: 2022/05/24 13:57:08 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		index;
	char	current;

	index = 0;
	while (str[index] != '\0')
	{
		current = str[index];
		if (current >= 'a' && current <= 'z')
			str[index] = current - 32;
		index++;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:29:16 by schuah            #+#    #+#             */
/*   Updated: 2022/05/25 16:19:23 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	index;
	int	found;

	index = 0;
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			index = 0;
			found = 0;
			while (to_find[index] != '\0')
			{
				if (str[index] != to_find[index])
					found = 1;
				index++;
			}
			if (found == 0)
				return (str);
		}
		str++;
	}
	return (0);
}

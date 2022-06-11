/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:32:40 by schuah            #+#    #+#             */
/*   Updated: 2022/05/24 13:20:25 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int index;

	index = 0;
	while (index < n &&	src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index <= n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

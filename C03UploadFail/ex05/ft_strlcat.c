/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:20:44 by schuah            #+#    #+#             */
/*   Updated: 2022/05/25 20:13:23 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_length;
	unsigned int	index;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	dest_length = ft_strlen(dest);
	index = 0;
	while ((dest_length < size - 1) && src[index] != '\0')
	{
		dest[dest_length] = src[index];
		index++;
		dest_length++;
	}
	dest[dest_length] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[index]));
}

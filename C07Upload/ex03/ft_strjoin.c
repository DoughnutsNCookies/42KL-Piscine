/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:31:45 by schuah            #+#    #+#             */
/*   Updated: 2022/05/30 21:42:50 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

char	*ft_strcat(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		*dest = src[index];
		index++;
		dest++;
	}
	return (dest);
}

int	total_length(int size, char **strs, int sep_len)
{
	int	index;
	int	length;

	index = 0;
	length = sep_len * -1;
	while (index < size)
	{
		length = length + sep_len + ft_strlen(strs[index]);
		index++;
	}
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*output;
	int		index;
	int		counter;

	if (size == 0)
	{
		output = malloc(1);
		return (output);
	}
	counter = total_length(size, strs, ft_strlen(sep));
	index = 0;
	output = malloc(sizeof(char) * (counter + 1));
	if (output == NULL)
		return (0);
	while (index < size)
	{
		output = ft_strcat(output, strs[index]);
		if (index + 1 < size)
			output = ft_strcat(output, sep);
		index++;
	}
	*output = '\0';
	return (output - counter);
}

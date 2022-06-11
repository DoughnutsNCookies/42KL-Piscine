/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:54:46 by schuah            #+#    #+#             */
/*   Updated: 2022/06/07 11:31:11 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

int	ft_strcmp(char *str1, char *str2)
{
	while (*str1 == *str2 && *str1)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

char	*ft_strdup(char *str)
{
	char	*output;
	int		index;
	int		length;

	index = 0;
	length = 0;
	while (str[length])
		length++;
	output = malloc(sizeof(str) * (index + 1));
	if (output == NULL)
		return (NULL);
	else
	{
		while (str[index])
		{
			output[index] = str[index];
			index++;
		}
		output[index] = '\0';
		return (output);
	}
}

int	ft_atoi(char *str)
{
	int	output;
	int	value;
	int	index;

	output = 0;
	value = 1;
	index = 0;
	while (str[index] == 32 || (str[index] >= 9 && str[index] <= 13))
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			value = -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		output = output * 10 + (str[index] - 48);
		index++;
	}
	if (index == 0)
		return (-1);
	return (output * value);
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

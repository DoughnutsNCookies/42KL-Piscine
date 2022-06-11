/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:47:59 by schuah            #+#    #+#             */
/*   Updated: 2022/06/01 10:38:22 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

char	*ft_strdup(char *src)
{
	char	*output;
	int		index;

	output = malloc(sizeof(src) * (ft_strlen(src) + 1));
	if (output == NULL)
		return (NULL);
	index = 0;
	while (src[index] != '\0')
	{
		output[index] = src[index];
		index++;
	}
	output[index] = 0;
	return (output);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*storage;
	int			index;

	storage = malloc(sizeof(t_stock_str) * (ac + 1));
	if (storage == NULL)
		return (NULL);
	index = 0;
	while (index < ac)
	{
		storage[index].str = av[index];
		storage[index].copy = ft_strdup(av[index]);
		storage[index].size = ft_strlen(av[index]);
		index++;
	}
	storage[index].str = 0;
	return (storage);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:15:50 by schuah            #+#    #+#             */
/*   Updated: 2022/05/31 18:54:46 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	*replace_charset(char *str, char *charset)
{
	int	index1;
	int	index2;
	
	index1 = 0;
	while (charset[index1] != '\0')
	{
		index2 = 0;
		while (str[index2] != '\0')
		{
			if(str[index2] == charset[index1])
				str[index2] = ' ';
			index2++;
		}
		index1++;
	}
	return str;
}

char	**ft_split(char *str, char *charset)
{
	char	*converted;
	char	**output;
	int		index1;
	int		index2;
	int		index3;
	int		newtab;
	
	output = NULL;
	converted = replace_charset(str, charset);
	index1 = 0;
	index2 = 0;
	index3 = 0;
	newtab = 1;
	while (converted[index1] != '\0')
	{
		if (converted[index1] != ' ')
		{
			*output[index1] = '1';
			printf("%c", *output[index1]); //= converted[index1];
		}
		index1++;
	}
	return NULL;
}

int	main(int ac, char **av)
{
	ac = 0;
	ft_split(av[1], av[2]);
	return (0);
}

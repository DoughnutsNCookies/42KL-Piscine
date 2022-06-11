/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 18:15:03 by schuah            #+#    #+#             */
/*   Updated: 2022/06/09 18:48:54 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_space(char c)
{
	return (c == ' ');
}

int	get_wc(char *str)
{
	int	index;
	int	wc;

	index = 0;
	wc = 0;
	while (str[index] != '\0')
	{
		while (is_space(str[index]))
			index++;
		if (str[index] == '\0')
			break ;
		while (!is_space(str[index]) && str[index] != '\0')
			index++;
		wc++;
	}
	return (wc);
}

char	*ft_strdup(char *str, int n)
{
	int		index;
	char	*output;

	output = malloc((n + 1) * sizeof(char));
	if (output == NULL)
		return (NULL);
	index = 0;
	while (index < n)
	{
		output[index] = str[index];
		index++;
	}
	output[index] = '\0';
	return (output);
}

char	**ft_split(char *str)
{
	char	**output;
	char	*word_start;
	int		index;
	int		length;

	index = 0;
	length = get_wc(str);
	*output = malloc(sizeof(char *) * (length + 1));
	if (output == NULL)
		return (NULL);
	while (*str != '\0')
	{
		while (is_space(*str))
			str++;
		if (*str == '\0')
			break ;
		word_start = str;
		while (!is_space(*str) && *str != '\0')
			str++;
		output[index] = ft_strdup(word_start, str - word_start);
		index++;
	}
	output[index] = 0;
	return (output);
}

#include <stdio.h>
int main(int argc, char **argv)
{
    int     index;
    char    **split;

    argc = 0;
    split = ft_split(argv[1]);
    index = 0;
    while (split[index])
    {
        printf("output[%d]: $%s$\n", index, split[index]);
        index++;
    }
}

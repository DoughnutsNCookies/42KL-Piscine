/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:23:37 by schuah            #+#    #+#             */
/*   Updated: 2022/06/02 10:23:42 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	index;

	if (c == '\0')
		return (1);
	index = -1;
	while (charset[++index] != '\0')
		if (c == charset[index])
			return (1);
	return (0);
}

int	get_length(char *str, char *charset)
{
	int	index;
	int	counter;

	index = -1;
	counter = 0;
	while (str[++index] != '\0')
		if (is_sep(str[index + 1], charset) && !is_sep(str[index], charset))
				counter++;
	return (counter);
}

void	put_strs(char **output, char *str, char *charset)
{
	int	index1;
	int	index2;
	int	sep_counter;
	int	counter;

	counter = 0;
	index1 = 0;
	while (str[index1] != '\0')
	{
		if (!is_sep(str[index1], charset))
		{
			sep_counter = 0;
			while (!is_sep(str[index1 + sep_counter], charset))
				sep_counter++;
			output[counter] = malloc(sep_counter + 1);
			index2 = -1;
			while (!is_sep((str + index1)[++index2], charset))
				output[counter][index2] = (str + index1)[index2];
			output[counter][index2] = '\0';
			index1 = index1 + sep_counter;
			counter++;
		}
		else
			index1++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**output;
	int		length;

	length = get_length(str, charset);
	output = malloc((length + 1) * sizeof(char *));
	put_strs(output, str, charset);
	return (output);
}

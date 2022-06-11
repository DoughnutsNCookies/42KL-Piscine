/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:31:45 by schuah            #+#    #+#             */
/*   Updated: 2022/05/30 15:16:52 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*output;
	int		index1;
	int		index2;
	int		counter;

	if (size == 0)
	{
		output = malloc(1);
		return (output);
	}
	output = malloc(sizeof(strs));
	index1 = -1;
	counter = -1;
	while (++index1 < size)
	{
		index2 = -1;
		while (strs[index1][++index2] != '\0')
			output[++counter] = strs[index1][index2];
		index2 = -1;
		while (sep[++index2] != '\0' && index1 != size - 1)
			output[++counter] = sep[index2];
	}
	output[counter] = '\0';
	return (output);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:28:44 by schuah            #+#    #+#             */
/*   Updated: 2022/05/30 21:43:39 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		counter;
	int		index;

	counter = 0;
	while (src[counter] != '\0')
		counter++;
	copy = malloc((counter * 1) + 1);
	if (copy == NULL)
		return (0);
	index = 0;
	while (src[index] != '\0')
	{
		copy[index] = src[index];
		index++;
	}
	copy[index] = '\0';
	return (copy);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:03:40 by schuah            #+#    #+#             */
/*   Updated: 2022/05/30 15:16:39 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	index;
	int	*output;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	length = max - min;
	output = malloc(4 * length);
	if (output == NULL)
		return (-1);
	index = 0;
	while (min < max)
	{
		output[index] = min;
		index++;
		min++;
	}
	*range = output;
	return (length);
}

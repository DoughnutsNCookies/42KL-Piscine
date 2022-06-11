/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:48:35 by schuah            #+#    #+#             */
/*   Updated: 2022/05/30 15:15:23 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	index;

	if (min >= max)
		return (0);
	range = malloc(4 * (max - min));
	index = 0;
	while (min < max)
	{
		range[index] = min;
		min++;
		index++;
	}
	return (range);
}

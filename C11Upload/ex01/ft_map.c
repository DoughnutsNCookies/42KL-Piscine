/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 19:23:02 by schuah            #+#    #+#             */
/*   Updated: 2022/06/05 15:22:06 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	index;
	int	*output;

	output = malloc(sizeof(int) * length);
	index = 0;
	while (index < length)
	{
		output[index] = (*f)(tab[index]);
		index++;
	}
	return (output);
}

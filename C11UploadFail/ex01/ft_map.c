/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 19:23:02 by schuah            #+#    #+#             */
/*   Updated: 2022/06/03 19:32:18 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

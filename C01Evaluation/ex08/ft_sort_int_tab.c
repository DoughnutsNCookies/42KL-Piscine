/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:47:26 by schuah            #+#    #+#             */
/*   Updated: 2022/05/23 18:30:06 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	sorted;
	int	temp;
	int	index;

	while (1)
	{
		sorted = 0;
		index = 0;
		while (index < (size - 1))
		{
			if (tab[index] > tab[index + 1])
			{
				temp = tab[index];
				tab[index] = tab[index + 1];
				tab[index + 1] = temp;
				sorted = 1;
			}
			index++;
		}
		if (sorted == 0)
		{
			break ;
		}
	}
}

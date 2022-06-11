/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:26:45 by schuah            #+#    #+#             */
/*   Updated: 2022/05/23 15:34:36 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	maxsize;
	int	temp;

	index = 0;
	maxsize = size;
	while ((tab[index] != '\0') && (index < (maxsize / 2)))
	{
		temp = tab[index];
		tab[index] = tab[size - 1];
		tab[size - 1] = temp;
		index++;
		size--;
	}
}

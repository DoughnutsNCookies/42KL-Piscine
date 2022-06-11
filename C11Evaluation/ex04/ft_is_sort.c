/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 13:40:58 by schuah            #+#    #+#             */
/*   Updated: 2022/06/04 21:03:28 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	index;
	int	sorted_up;
	int	sorted_down;

	index = 0;
	sorted_up = 0;
	sorted_down = 0;
	while (index < length - 1)
	{
		if ((*f)(tab[index], tab[index + 1]) >= 0)
			sorted_up++;
		if ((*f)(tab[index], tab[index + 1]) <= 0)
			sorted_down++;
		index++;
	}
	if (sorted_up == index || sorted_down == index)
		return (1);
	return (0);
}

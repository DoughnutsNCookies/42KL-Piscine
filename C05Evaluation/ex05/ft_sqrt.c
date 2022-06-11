/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:51:35 by schuah            #+#    #+#             */
/*   Updated: 2022/05/27 17:59:47 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	index;

	if (nb > 2147395600)
		return (0);
	index = 1;
	if (nb > 0)
	{
		while (index * index <= nb)
		{
			if (index * index == nb)
				return (index);
			index++;
		}
	}
	return (0);
}

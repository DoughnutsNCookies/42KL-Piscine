/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 13:31:50 by schuah            #+#    #+#             */
/*   Updated: 2022/06/04 13:36:02 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (index < length)
	{
		if ((*f)(tab[index]) != 0)
			count++;
		index++;
	}
	return (count);
}

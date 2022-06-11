/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:08:20 by schuah            #+#    #+#             */
/*   Updated: 2022/05/25 21:25:29 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	if (n == 0)
		return (0);
	while (n > index && s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
			break ;
		index++;
	}
	return (s1[index] - s2[index]);
}

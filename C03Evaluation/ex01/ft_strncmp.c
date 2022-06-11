/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:08:20 by schuah            #+#    #+#             */
/*   Updated: 2022/05/26 14:13:06 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;
	int				diff;

	index = 0;
	diff = 0;
	if (n == 0)
		return (0);
	while (index < n && diff == 0 && s1[index] != '\0' && s2[index] != '\0')
	{
		diff = (unsigned char)s1[index] - (unsigned char)s2[index];
		index++;
	}
	if (index < n && diff == 0 && (s1[index] == '\0' || s2[index] == '\0'))
			diff = (unsigned char)s1[index] - (unsigned char)s2[index];
	return (diff);
}

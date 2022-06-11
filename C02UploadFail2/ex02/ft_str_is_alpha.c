/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:22:54 by schuah            #+#    #+#             */
/*   Updated: 2022/05/25 17:30:43 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		index;
	int		ischaracter;
	char	c;

	ischaracter = 1;
	index = 0;
	while (str[index] != '\0')
	{
		c = str[index];
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			ischaracter = 1;
		else
			return (0);
		index++;
	}
	return (ischaracter);
}

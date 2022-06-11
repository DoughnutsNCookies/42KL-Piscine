/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:22:54 by schuah            #+#    #+#             */
/*   Updated: 2022/05/24 13:20:39 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		index;
	int		ischaracter;
	char	current;

	ischaracter = 1;
	index = 0;
	while (str[index] != '\0')
	{
		current = str[index];
		if (current == '\0')
			return (0);
		if (current >= 'A' && current <= 'Z')
			ischaracter = 1;
		if (current >= 'a' && current <= 'z')
			ischaracter = 1;
		else
			return (0);
		index++;
	}
	return (ischaracter);
}

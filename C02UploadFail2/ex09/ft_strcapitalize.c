/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:27:01 by schuah            #+#    #+#             */
/*   Updated: 2022/05/24 17:52:11 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_lowercase(char *str)
{
	return (*str >= 'a' && *str <= 'z');
}

int	check_alphabet(char *str)
{
	return (check_lowercase(str) || (*str >= 'A' && *str <= 'Z'));
}

int	check_number(char *str)
{
	return (*str >= '0' && *str <= '9');
}

int	check_front_alphanumeric(char *str, int index)
{
	return ((check_alphabet(&str[index - 1])) || check_number(&str[index - 1]));
}

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (index == 0 || !check_front_alphanumeric(str, index))
		{
			if (check_lowercase(str + index))
				str[index] -= 32;
		}
		else
		{
			if (check_alphabet(str + index))
			{
				if (!check_lowercase(str + index))
					str[index] += 32;
			}
		}
		index++;
	}
	return (str);
}

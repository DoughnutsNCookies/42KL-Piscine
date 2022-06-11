/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:23:11 by schuah            #+#    #+#             */
/*   Updated: 2022/05/30 20:19:02 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char *str, int index)
{
	if (str[index] == '\n' || str[index] == '\t')
		return (1);
	if (str[index] == '\v' || str[index] == '\f')
		return (1);
	if (str[index] == '\r' || str[index] == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	index;
	int	value;
	int	num;

	index = 0;
	value = 1;
	inum = 0;
	while (is_space(str, index))
			index++;
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			value *= -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		num = (num * 10) + (str[index] - 48);
		index++;
	}
	return (num * value);
}

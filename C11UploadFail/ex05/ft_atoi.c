/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 14:22:47 by schuah            #+#    #+#             */
/*   Updated: 2022/06/04 16:21:19 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_atoi(char *str)
{
	int	output;
	int	value;

	output = 0;
	value = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			value *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		output = output * 10 + ((*str) - 48);
		str++;
	}
	return (output * value);
}

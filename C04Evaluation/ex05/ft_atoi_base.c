/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:32:20 by schuah            #+#    #+#             */
/*   Updated: 2022/05/26 13:56:54 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char str)
{
	if (str == '\n' || str == '\t')
		return (1);
	if (str == '\v' || str == '\f')
		return (1);
	if (str == '\r' || str == ' ')
		return (1);
	return (0);
}

int	check_base(char *base)
{
	int	index;
	int	index2;

	index = 0;
	index2 = 0;
	while (base[index] != '\0')
	{
		if (is_space(base[index]) || base[index] == '+' || base[index] == '-')
			return (0);
		index++;
	}
	if (index <= 1)
		return (0);
	while (base[index2] != '\0')
	{
		index = index2 + 1;
		while (base[index] != '\0')
		{
			if (base[index2] == base[index])
				return (0);
			index++;
		}
		index2++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	index;
	int	value;
	int	num;

	index = 0;
	value = 1;
	num = 0;
	while (str[index] == '+' || str[index] == '-' || is_space(str[index]))
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

int	ft_write_base(int str_int, char *base, int index)
{
	int	print_int;
	int	output;

	output = 0;
	if (str_int < 0)
		print_int = str_int * (-1);
	else
		print_int = str_int;
	if (print_int >= index)
		output = ft_write_base((print_int / index), base, index);
	output = (output * index) + (base[print_int % index] - 48);
	return (output);
}

int	ft_atoi_base(char *str, char *base)
{
	int	index;
	int	str_int;

	index = 0;
	if (!check_base(base))
		return (0);
	str_int = ft_atoi(str);
	if (str_int == 0)
		return (0);
	while (base[index] != '\0')
		index++;
	return (ft_write_base(str_int, base, index));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_text.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:12:56 by schuah            #+#    #+#             */
/*   Updated: 2022/06/05 18:40:18 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c, int where)
{
	write(where, &c, 1);
}

void	ft_puttxt(char *str, int size)
{
	int	index;

	index = -1;
	while (++index < size)
		ft_putchar(str[index], 1);
}

void	ft_putstr(char *str, int where)
{
	int	index;

	index = -1;
	while (*(str + (++index)) != '\0')
		ft_putchar(*(str + index), where);
}

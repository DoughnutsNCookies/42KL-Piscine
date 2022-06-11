/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:44:16 by schuah            #+#    #+#             */
/*   Updated: 2022/05/19 16:09:18 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_putnbr.c"

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(INT_MAX);
	ft_putnbr(INT_MIN);
	ft_putnbr(0);
	ft_putnbr(1);
	ft_putnbr(-1);
	return (0);
}

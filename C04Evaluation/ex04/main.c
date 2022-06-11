/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:44:16 by schuah            #+#    #+#             */
/*   Updated: 2022/05/26 11:17:28 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_putnbr_base.c"

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(40, "0");
	ft_putnbr_base(40, "0123456789abcde0f");
	ft_putnbr_base(40, "01234567+89abcdef");
	ft_putnbr_base(40, "01234567+89abcdef-");
	ft_putnbr_base(40, "0123456789abcdef");
	ft_putnbr_base(31, "0123456789abcdef");
	ft_putnbr_base(15, "01");
	ft_putnbr_base(-15, "0123456789");
	ft_putnbr_base(-16, "01");
	ft_putnbr_base(2147483647, "0123456789abcdef");
	ft_putnbr_base(-2147483648, "0123456789abcdef");
	return (0);
}

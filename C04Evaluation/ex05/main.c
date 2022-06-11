/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:44:16 by schuah            #+#    #+#             */
/*   Updated: 2022/05/26 13:14:05 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_atoi_base.c"

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("%d", ft_atoi_base("40", "0"));
    printf("%d", ft_atoi_base("40", "0123456789abcde0f"));
    printf("%d", ft_atoi_base("40", "01234567+89abcdef"));
    printf("%d", ft_atoi_base("40", "01234567+89abcdef-"));
    printf("%d", ft_atoi_base("15", "0123456789"));
    printf("%d", ft_atoi_base("3f", "0123456789abcdef"));
    printf("%d", ft_atoi_base("a", "0a"));
    printf("%d", ft_atoi_base("-15", "0123456789"));
    printf("%d", ft_atoi_base("-111", "01"));
    printf("%d", ft_atoi_base("a", "0"));
    printf("%d", ft_atoi_base("1", "0123456789"));
    printf("%d", ft_atoi_base("1", "01234+"));
    printf("%d", ft_atoi_base("5", "01234"));
    printf("%d", ft_atoi_base("", "01234"));
	return (0);
}

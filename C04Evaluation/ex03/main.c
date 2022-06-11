/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:44:16 by schuah            #+#    #+#             */
/*   Updated: 2022/05/26 12:36:04 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_atoi.c"

int	ft_atoi(char *str);

int	main(void)
{
	printf("%d,%d,%d", ft_atoi("  + -- + - 15"), ft_atoi("0"), ft_atoi("-abasdn25"));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:49:15 by schuah            #+#    #+#             */
/*   Updated: 2022/05/29 14:59:23 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>
#include "ft_range.c"

int	main(void)
{
	int*	res;
	int		i;
	res = ft_range(5, 10);
	for (i = 0; i < 5; i++)
		printf("%d,", res[i]);
	printf("\n");
	
	res = ft_range(-20, -15);
	for (i = 0; i < 5; i++)
		printf("%d,", res[i]);
	printf("\n");
	
	res = ft_range(100, 101);
	for (i = 0; i < 1; i++)
		printf("%d,", res[i]);
	printf("\n");
	
	res = ft_range(10, 5);
	printf("%" PRIxPTR "\n", (uintptr_t) res);
	return (0);
}

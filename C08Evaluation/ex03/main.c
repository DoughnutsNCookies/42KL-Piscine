/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:46:12 by schuah            #+#    #+#             */
/*   Updated: 2022/06/01 11:17:29 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void	set_point(t_point *point)
{
	printf("x > %d, y > %d\n", point->x, point->y);
	point->x = 42;
	point->y = 21;
	printf("x > %d, y > %d", point->x, point->y);
}

int	main(void)
{
	t_point	point;

	set_point(&point);
	return (0);
}

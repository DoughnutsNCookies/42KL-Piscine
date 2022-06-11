/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:13:52 by schuah            #+#    #+#             */
/*   Updated: 2022/05/23 18:28:56 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_sort_int_tab.c"

void	ft_sort_int_tab(int *tab, int size);

int main()
{
	int test1[] = {1,5,4,2,3,5,2,3,4,6,1,0,0,-1,-12};
	int size = 15;
	ft_sort_int_tab(test1, size);
	
	for (int i = 0; i < size; i++)
		printf("%d,", test1[i]);
}

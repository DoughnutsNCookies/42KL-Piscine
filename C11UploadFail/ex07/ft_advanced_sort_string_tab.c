/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 20:54:27 by schuah            #+#    #+#             */
/*   Updated: 2022/06/04 21:06:53 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *str1, char *str2)
{
	int	index;
	int	diff;

	index = 0;
	diff = 0;
	while (str1[index] != '\0' && str2[index] != '\0'
		&& str1[index] == str2[index])
		index++;
	diff = (unsigned char)str1[index] - (unsigned char)str2[index];
	return (diff);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	length;
	int	swapped;
	int	index;

	length = 0;
	while (tab[length] != 0)
		length++;
	swapped = 1;
	while (swapped)
	{
		index = 0;
		swapped = 0;
		while (index < length - 1)
		{
			if ((*cmp)(tab[index], tab[index + 1]) > 0)
			{
				ft_swap(&tab[index], &tab[index + 1]);
				swapped = 1;
			}
			index++;
		}
	}
}

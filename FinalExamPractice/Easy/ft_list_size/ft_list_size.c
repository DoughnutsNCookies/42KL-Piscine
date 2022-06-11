/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 13:23:32 by schuah            #+#    #+#             */
/*   Updated: 2022/06/09 13:24:50 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_list_size(t_list *begin_list)
{
	int	counter;

	counter = 0;
	if (begin_list == NULL)
		return (0);
	while (begin_list != NULL)
	{
		counter++;
		begin_list = begin_list->next;
	}
	return (counter);
}

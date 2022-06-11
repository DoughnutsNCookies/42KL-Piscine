/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:17:41 by schuah            #+#    #+#             */
/*   Updated: 2022/05/26 16:34:10 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	output;

	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index > 1)
	{
		output = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (output);
	}
	else
		return (-1);
}

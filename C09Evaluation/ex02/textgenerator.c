/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textgenerator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:00:10 by schuah            #+#    #+#             */
/*   Updated: 2022/06/02 14:08:28 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int	main(void)
{
	int		fileinfo;
	unsigned int counter;

	counter = 0;
	fileinfo = open("myfile.txt", O_CREAT | O_WRONLY, 0600);

	if (fileinfo == -1)
		write(1, "Failed", 6);
	while (counter < 3000000000)
	{
		write(fileinfo, "a", 1);
		counter++;
	}
	printf("ok");
	close(fileinfo);
	return (0);
}

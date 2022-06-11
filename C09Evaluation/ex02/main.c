/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:19:17 by schuah            #+#    #+#             */
/*   Updated: 2022/06/02 18:13:47 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_split.c"

char	**ft_split(char *str, char *charset);

int main(int argc, char **argv)
{
    int     index;
    char    **split;

    argc = 0;
    split = ft_split(argv[1], argv[2]);
    index = 0;
    while (split[index])
    {
        printf("output[%d]: $%s$\n", index, split[index]);
        index++;
    }
}

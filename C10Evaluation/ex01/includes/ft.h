/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:16:01 by schuah            #+#    #+#             */
/*   Updated: 2022/06/05 18:41:44 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/errno.h>
# include <sys/types.h>
# include <libgen.h>
# include <string.h>

void	ft_putchar(char c, int where);
void	ft_puttxt(char *str, int size);
void	ft_putstr(char *str, int where);

#endif

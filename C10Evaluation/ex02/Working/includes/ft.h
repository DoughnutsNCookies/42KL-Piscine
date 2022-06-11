/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 12:12:51 by ybayart           #+#    #+#             */
/*   Updated: 2022/06/07 11:31:47 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# define BUF 30000

# include <fcntl.h>
# include <unistd.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <errno.h>
# include <string.h>
# include <libgen.h>
# include <stdlib.h>

void	ft_putchar(int where, unsigned char c);
void	ft_swap(int *a, int *b);
void	pull_one(char *str, int size);
void	ft_putstr(int where, char *str);
void	ft_putstr_limited(char *str, int size);
void	ft_title(char *filename);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		count_file(char *filepath);
void	get_file(char *filepath, int sizetot, int size);
void	ft_file_std(void);
void	freeplay(char **argv);
void	fp_stdin(int size, char **args);
void	gest_args(int argc, char **argv);
int		ft_atoi(char *str);
char	*ft_strdup(char *src);
char	*malloc_buf(int size);
void	print_fd(int argc, char **args, int octet);
void	print_io(char *name, char *obj);
void	print_errno(char **args, int i);
void	print_usage(char *name);

#endif

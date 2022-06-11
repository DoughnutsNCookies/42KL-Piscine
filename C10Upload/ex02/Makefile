# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 10:58:34 by schuah            #+#    #+#              #
#    Updated: 2022/06/07 10:58:36 by schuah           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= srcs/ft_fileprinting.c srcs/ft_printing.c srcs/ft_getfile.c srcs/libft.c srcs/main.c
HDDIR		= ./includes/
OBJS		= ${SRCS:.c=.o}
NAME		= ft_tail
GCC			= gcc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror

.c.o		:
				${GCC} ${CFLAGS} -c -I ${HDDIR} $< -o ${<:.c=.o}

${NAME}		:${OBJS}
				${GCC} ${CFLAGS} ${OBJS} -o ${NAME}

all			:${NAME}

clean		:
				${RM} ${OBJS}

fclean		:clean
				${RM} ${NAME}

re			:fclean all


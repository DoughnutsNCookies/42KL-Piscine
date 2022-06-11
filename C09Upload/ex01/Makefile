# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 15:16:06 by schuah            #+#    #+#              #
#    Updated: 2022/05/31 15:16:11 by schuah           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS		= ${SRCS:.c=.o}
HDDIR		= ./includes/
NAME		= libft.a
ARRC		= ar rc
RM			= rm -f
LIB			= ranlib
GCC			= gcc
CFLAGS		= -Wall -Wextra -Werror

all			:${NAME}

.c.o		:
			${GCC} ${CFLAGS} -c -I ${HDDIR} $< -o ${<:.c=.o}

${NAME}		:${OBJS}
			${ARRC} ${NAME} ${OBJS}
			${LIB} ${NAME}

clean		:
			${RM} ${OBJS}

fclean		:clean
			${RM} ${NAME}

re			:fclean all

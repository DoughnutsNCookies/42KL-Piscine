# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/04 16:54:16 by schuah            #+#    #+#              #
#    Updated: 2022/06/05 15:57:01 by schuah           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= do-op
GCC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
SRC		= srcs/operator.c srcs/do-op.c srcs/ft_atoi.c srcs/output_text.c
HDDIR	= ./includes/
OBJS	= ${SRC:.c=.o}

all		:${NAME}

${NAME}	:${OBJS}
			${GCC} ${CFLAGS} ${OBJS} -o ${NAME}

.c.o	:
			${GCC} ${CFLAGS} -c -I ${HDDIR} $< -o ${<:.c=.o}

clean	:
			${RM} ${OBJS}

fclean	:clean
			${RM} ${NAME}

re		:fclean all

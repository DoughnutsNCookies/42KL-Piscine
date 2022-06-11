# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 11:57:03 by schuah            #+#    #+#              #
#    Updated: 2022/06/05 18:33:20 by schuah           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_cat
GCC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
SRC		= srcs/ft_cat.c srcs/output_text.c
HDDIR	= ./includes/
OBJS	= ${SRC:.c=.o}

all		:${NAME}

${NAME}	:${OBJS}
			${GCC} ${CFLAGS} ${OBJS} -o ${NAME}

.c.o	:
			${GCC} ${CFLAGS} -c -I ${HDDIR} $< -o ${<:.c=.o}

clean	: 
			${RM} ${OBJS}

fclean	: clean
			${RM} ${NAME}

re		:fclean all

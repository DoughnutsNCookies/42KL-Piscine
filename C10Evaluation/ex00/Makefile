# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 11:57:03 by schuah            #+#    #+#              #
#    Updated: 2022/06/01 19:32:51 by schuah           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_display_file
GCC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
SRC		= ft_display_file.c
OBJS	= ${SRC:.c=.o}

all		:${NAME}

${NAME}	:${OBJS}
			${GCC} ${CFLAGS} -o ${NAME} ${SRC}

clean	: 
			${RM} ${OBJS}

fclean	: clean
			${RM} ${NAME}

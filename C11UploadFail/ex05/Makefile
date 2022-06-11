# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/04 16:54:16 by schuah            #+#    #+#              #
#    Updated: 2022/06/04 17:02:24 by schuah           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= do-op
GCC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
SRC		= operator.c do-op.c ft_atoi.c output_text.c
OBJS	= ${SRC:.c=.o}

all		:${NAME}

${NAME}	:${OBJS}
			${GCC} ${CFLAGS} -o ${NAME} ${SRC}

clean	:
			${RM} ${OBJS}

fclean	:clean
			${RM} ${NAME}

re		:fclean all

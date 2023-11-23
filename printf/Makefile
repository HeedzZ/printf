# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 12:27:08 by ymostows          #+#    #+#              #
#    Updated: 2023/11/23 14:44:56 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_printf.c \
				ft_printhex.c \
				ft_printnum.c \
				ft_printstr.c \
				ft_printp.c	  \

OBJS		= ${SRCS:.c=.o}
NAME		= libftprintf.a
CC			= gcc -Wall -Wextra -Werror

%.o: %.c ft_printf.h
			${CC} -I. -c $< -o ${<:.c=.o}

all:		${NAME}

$(NAME):	${OBJS} ft_printf.h
			ar rcs ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus


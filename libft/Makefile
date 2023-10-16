# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/10 17:15:49 by bebrandt          #+#    #+#              #
#    Updated: 2023/10/16 15:40:23 by bebrandt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_atoi.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_strchr.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strlcat.c \
			#ft_memset.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memcmp.c \
			ft_memchr.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_strdup.c

OBJS	=	${SRCS:.c=.o}

HDRS	=	-I .

CC		=	gcc ${HDRS}

CFLAGS	=	-Wall -Wextra -Werror

AR		=	ar rc

LIB		=	ranlib

RM		=	rm -f

all:	${NAME}

%.o:	%.c
	${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS}
	${AR} ${NAME} $^
	${LIB} ${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re

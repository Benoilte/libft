# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/10 17:15:49 by bebrandt          #+#    #+#              #
#    Updated: 2023/11/24 17:57:54 by bebrandt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
			ft_isprint.c ft_strchr.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
			ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strlcat.c \
			ft_memset.c ft_memcpy.c ft_memmove.c ft_memcmp.c ft_memchr.c \
			ft_bzero.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c \
			ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCS_BONUS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
				ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
				ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS		:=	$(SRCS:.c=.o)

OBJS_BONUS	:=	$(SRCS_BONUS:.c=.o)

OBJS_ALL	=	$(OBJS) $(OBJS_BONUS)

HDRS		=	-I .

CC			=	gcc $(HDRS)

CFLAGS		=	-Wall -Wextra -Werror

AR			=	ar rcs

LIB			=	ranlib

RM			=	rm -f

all:	$(NAME)

%.o:	%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	$(AR) $(NAME) $^
	$(LIB) $(NAME)

bonus:	$(OBJS_ALL)
	$(AR) $(NAME) $^
	$(LIB) $(NAME)

clean:
	$(RM) $(OBJS_ALL)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all bonus clean fclean re

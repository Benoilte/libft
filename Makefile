# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/12 09:29:55 by bebrandt          #+#    #+#              #
#    Updated: 2024/01/18 11:20:20 by bebrandt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

F = ft_atoi ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint ft_strchr \
	ft_strlcpy ft_strlen ft_strncmp ft_strnstr ft_strrchr ft_tolower \
	ft_toupper ft_strlcat ft_memset ft_memcpy ft_memmove ft_memcmp ft_memchr \
	ft_bzero ft_strdup ft_calloc ft_substr ft_strjoin ft_strtrim ft_split \
	ft_itoa ft_strmapi ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd \
	ft_putnbr_fd ft_lstnew ft_lstadd_front ft_lstsize \
	ft_lstlast ft_lstadd_back ft_lstdelone \
	ft_lstclear ft_lstiter ft_lstmap

LIBPATH = libft/

LIBNAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

TESTPATH = test_libft/test_

.PHONY: all compile bonus cleanexe clean fclean re

all:
	(cd libft; make all)
	$(MAKE) compile

compile: bonus $F

$F: %: $(LIBPATH)%.c $(TESTPATH)%.c $(LIBPATH)$(LIBNAME)
	$(CC) $(CFLAGS) $(TESTPATH)$@.c $(LIBPATH)$(LIBNAME) -o $@

$(LIBPATH)$(LIBNAME):
	(cd libft; make all)

bonus:
	(cd libft; make bonus)

cleanexe:
	rm -rf ft_*

clean:
	(cd libft; make clean)

fclean:
	(cd libft; make fclean)
	$(MAKE) cleanexe

re:
	(cd libft; make re bonus)

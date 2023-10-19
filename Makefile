# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/12 09:29:55 by bebrandt          #+#    #+#              #
#    Updated: 2023/10/19 02:48:11 by bebrandt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

F = ft_atoi \
	ft_isalnum \
	ft_isalpha \
	ft_isascii \
	ft_isdigit \
	ft_isprint \
	ft_strchr \
	ft_strlcpy \
	ft_strlen \
	ft_strncmp \
	ft_strnstr \
	ft_strrchr \
	ft_tolower \
	ft_toupper \
	ft_strlcat \
	ft_memset \
	ft_memcpy \
	ft_memmove \
	ft_memcmp \
	ft_memchr \
	ft_bzero \
	ft_strdup \
	ft_calloc \
	ft_substr \
	ft_strjoin \
	ft_strtrim \
	ft_split

LIBPATH = libft/

LIBNAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

TESTPATH = test_libft/test_

.PHONY: all compile compileall cleanexe clean fclean re

all:
	(cd libft; make all)

compile: all $F

$F: %: $(LIBPATH)%.c $(TESTPATH)%.c $(LIBPATH)$(LIBNAME)
	$(CC) $(CFLAGS) $(TESTPATH)$@.c $(LIBPATH)$(LIBNAME) -o $@

$(LIBPATH)$(LIBNAME):
	(cd libft; make all)

cleanexe:
	rm -rf ft_*

clean:
	(cd libft; make clean)

fclean:
	(cd libft; make fclean)
	$(MAKE) cleanexe

re:
	(cd libft; make re)

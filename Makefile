# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bebrandt <benoit.07@hotmail.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/12 09:29:55 by bebrandt          #+#    #+#              #
#    Updated: 2023/10/12 15:08:55 by bebrandt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FCNNAME = 

LIBPATH = libft/

LIBNAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

TESTPATH = test_libft/

SRCS = test_atoi.c \
		#ft_isalnum.c \
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
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_memset.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memcmp.c \
		ft_memchr.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_strdup.c

.PHONY: all compile cleanexe clean fclean re

all:
	(cd libft; make all)

compile: $(FCNNAME).exe
	
$(FCNNAME).exe: $(LIBPATH)ft_$(FCNNAME).c
	$(MAKE) re
	$(CC) $(CFLAGS) $(TESTPATH)test_$(FCNNAME).c $(LIBPATH)$(LIBNAME) -o $@

cleanexe:
	rm -rf *.exe
	
clean:
	(cd libft; make clean)

fclean:
	(cd libft; make fclean)

re:
	(cd libft; make re)
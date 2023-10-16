# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/12 09:29:55 by bebrandt          #+#    #+#              #
#    Updated: 2023/10/16 10:45:46 by bebrandt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

F =

LIBPATH = libft/

LIBNAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

TESTPATH = test_libft/

.PHONY: all compile cleanexe clean fclean re

all:
	(cd libft; make all)

compile: $F.exe

$F.exe: $(LIBPATH)ft_$F.c $(TESTPATH)test_$F.c
	$(MAKE) re
	$(CC) $(CFLAGS) $(TESTPATH)test_$F.c $(LIBPATH)$(LIBNAME) -o $@

cleanexe:
	rm -rf *.exe

clean:
	(cd libft; make clean)

fclean:
	(cd libft; make fclean)
	$(MAKE) cleanexe

re:
	(cd libft; make re)

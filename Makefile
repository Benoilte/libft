# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/12 09:29:55 by bebrandt          #+#    #+#              #
#    Updated: 2023/10/13 14:21:15 by bebrandt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FCN =

LIBPATH = libft/

LIBNAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

TESTPATH = test_libft/

.PHONY: all compile cleanexe clean fclean re

all:
	(cd libft; make all)

compile: $(FCN).exe

$(FCN).exe: $(LIBPATH)ft_$(FCN).c $(TESTPATH)test_$(FCN).c
	$(MAKE) re
	$(CC) $(CFLAGS) $(TESTPATH)test_$(FCN).c $(LIBPATH)$(LIBNAME) -o $@

cleanexe:
	rm -rf *.exe

clean:
	(cd libft; make clean)

fclean:
	(cd libft; make fclean)
	$(MAKE) cleanexe

re:
	(cd libft; make re)

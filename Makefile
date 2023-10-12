# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bebrandt <benoit.07@hotmail.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/12 09:29:55 by bebrandt          #+#    #+#              #
#    Updated: 2023/10/12 09:57:31 by bebrandt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

all:
	(cd libft; make all)

clean:
	(cd libft; make clean)

fclean:
	(cd libft; make fclean)

re:
	(cd libft; make re)
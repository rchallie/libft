# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchallie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/07 11:05:52 by rchallie          #+#    #+#              #
#    Updated: 2019/10/07 14:30:59 by rchallie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = *.c

CC = gcc -c

CC_FLAGS = -Wall -Wextra -Werror

all:
			 ${CC} ${SRCS} libft.h ${CC_FLAGS}
			 ar r libft.a *.o
			 rm *.o
clean : 
			rm libft.a

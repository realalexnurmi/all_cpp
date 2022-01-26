# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enena <enena@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/09 00:19:56 by enena             #+#    #+#              #
#    Updated: 2022/01/14 19:58:05 by enena            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL = /bin/sh

.PHONY	:	all clean fclean re

NAME	=	megaphone
SRCS	=	megaphone.cpp
FLAGS	=	-Wall -Wextra -Werror -std=c++98
CC		=	c++
OBJS	=	$(SRCS:%.cpp=%.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $^ $(FLAGS) -o $@ 

%.o: %.cpp
	$(CC) -c $< $(FLAGS) -o $@ 

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean all
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enena <enena@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/09 00:19:56 by enena             #+#    #+#              #
#    Updated: 2022/01/19 22:48:12 by enena            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL = /bin/sh

.PHONY	:	all clean fclean re

NAME	=	karenFilter
SRCS	=	main.cpp Karen.cpp
FLAGS	=	-g -Wall -Wextra -Werror -std=c++98
CC		=	c++
OBJS	=	$(SRCS:%.cpp=%.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $^ $(FLAGS) -o $@ 

%.o: %.cpp %.hpp
	$(CC) -c $< $(FLAGS) -o $@

%.o: %.cpp
	$(CC) -c $< $(FLAGS) -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean all
NAME=programm
SRCS=Fixed.cpp main.cpp
FLAGS=-Wall -Wextra -Werror -std=c++98
CC			=	clang++
OBJS		=	${SRCS:.cpp=.o}

.PHONY		:	all clean fclean re

all			:	${NAME}
${NAME}		:	${OBJS}
				${CC} ${FLAGS} -o $@ $^
clean		:
				rm -rf ${OBJS}
fclean		:	clean
				rm -rf ${NAME}
re			:	fclean all
NAME	= Vogon

FLAGS	= -Wall -Wextra -Werror -Wshadow-all -std=c++98

SRCS	= Bureaucrat.cpp Form.cpp main.cpp

INC		= Bureaucrat.hpp Form.hpp

OBJS	= $(SRCS:%.cpp=%.o)

.PHONY:	all clean fclean re

all: $(NAME)

%.o: %.cpp %.hpp
	clang++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJS) $(INC)
	clang++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
NAME	= Vogon

FLAGS	= -Wall -Wextra -Werror -Wshadow-all -std=c++98

SRCS	= Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp main.cpp

INC		= Bureaucrat.hpp PresidentialPardonForm.hpp Form.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp

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
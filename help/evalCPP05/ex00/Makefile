NAME = bureaucrat

SRC = $(wildcard *.cpp)
HEADER = $(wildcard *.hpp)
OBJ = $(SRC:.cpp=.o)
	FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
		@g++ $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
		@g++ -c $<

clean:
		@rm -f $(OBJ)
fclean: clean
		@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

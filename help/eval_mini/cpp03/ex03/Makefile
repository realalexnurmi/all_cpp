NAME = DiamondTrap

FILES = $(wildcard *.cpp)
HEADER = $(wildcard *.hpp)
O_FILES = $(FILES:.cpp=.o)
FLAGS = -Wshadow -Who-shadow -std=c++98

all: $(NAME)

$(NAME): $(O_FILES)
	@clang++ -g $(FLAGS) $(O_FILES) -o $(NAME)

%.o: %.cpp $(HEADER)
	@clang++ -c $<

clean:
	@rm -f $(O_FILES)
fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

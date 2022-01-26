.PHONY: all clean fclean re help

GREEN = \033[0;32m
RESET = \033[0m
BLUE = \033[0;44m
RED = \033[0;31m
YELLOW = \033[0;33m

NAME_CLIENT = client

NAME_SERVER = server

FLAGS = -Wall -Wextra -Werror -c

CC = gcc

SRCS_CLIENT =	./client_create/client_utils.c \
				./client_create/client.c
OBG_CLIENT = $(SRCS_CLIENT:.c=.o)

SRCS_SERVER =	./server_create/server_utils.c \
				./server_create/server.c
OBG_SERVER = $(SRCS_SERVER:.c=.o)

all: $(NAME_CLIENT) $(NAME_SERVER)

$(NAME_CLIENT): $(OBG_CLIENT)
	@$(CC) $(OBG_CLIENT) -o $@
	@echo "$(RED)Create CLIENT$(RESET)"
	@sleep 1s
	@clear

$(NAME_SERVER): $(OBG_SERVER)
	@$(CC) $(OBG_SERVER) -o $@
	@echo "$(RED)Create SERVER$(RESET)"
	@sleep 1s
	@clear

.c.o:
	@$(CC) $(FLAGS) $< -o $@
	@echo "$(BLUE)Create object$(RESET) - $(GREEN)$@ $(RESET)"

clean:
	@rm -rf $(OBG_CLIENT)
	@rm -rf $(OBG_SERVER)
	@echo "$(YELLOW)Delete objects$(RESET)"
	@sleep 1s
	@clear

fclean: clean
	@echo "$(RED)Delete client$(RESET)"
	@rm -rf $(NAME_CLIENT)
	@sleep 1s
	@clear
	@echo "$(RED)Delete server$(RESET)"
	@rm -rf $(NAME_SERVER)
	@sleep 1s
	@clear

re: fclean all
	@echo "$(GREEN)Recompilation - Done$(RESET)"
	@sleep 1s
	@clear

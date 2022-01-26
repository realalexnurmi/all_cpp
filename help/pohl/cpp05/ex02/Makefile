# Source files directory
S		= srcs/
# Object files directory
O		= objs/
# Include files directory
I		= incs/
# Dependency files directory
D		= deps/

# Name of your program
NAME	= forms

# list of your source files
SRCS	= main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp \
		  RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

# Compiler
CC		= clang++
# Compiler flags
CFLAGS	+= -Wall -Wextra -Werror -std=c++98
# Assembly flags (add the libraries here for linux)
LDFLAGS	+= 

# The rest is automatic

CFLAGS	+= -I$I

SRCS	:= $(foreach file,$(SRCS),$S$(file))
OBJS	= $(SRCS:$S%=$O%.o)
DEPS	= $(SRCS:$S%=$D%.d)

RM		= /bin/rm -rf

.PHONY: all clean fclean re test

all: $(NAME)

$O:
	@mkdir $@

$(OBJS): | $O

$(OBJS): $O%.o: $S%
	@echo "Compiling $^: "
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "✓"

$D:
	@mkdir $@

$(DEPS): | $D

$(DEPS): $D%.d: $S%
	@$(CC) $(CFLAGS) -MM -MF $@ -MT "$O$*.o $@" $<

$(NAME): $(OBJS)
	@echo "Assembling $(NAME)"
	@$(CC) $(LDFLAGS) $^ -o $@

clean:
	@echo "Cleaning up..."
	@$(RM) $D $O *_shrubbery

fclean: clean
	@echo "Everything!"
	@$(RM) $(NAME)

re: fclean all

test: $(NAME)
	./$(NAME)

-include $(DEPS)

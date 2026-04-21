SRC = main.cpp

NAME = find_next_line

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -I.

OBJ = $(SRC:%.cpp=%.o)

# Color codes ✨
WHITE = \033[0;37m
BRED = \033[1;31m
BWHITE = \033[1;37m
BGREEN = \033[1;32m
RESET = \033[0m

all: $(NAME)

$(NAME) : $(OBJ)
	@echo "$(WHITE)Compiling $(BWHITE)$(NAME)$(WHITE) program...$(RESET)"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(BWHITE)$(NAME)$(WHITE) program is $(BGREEN)ready! $(RESET)✅"

%.o : %.cpp
	@echo "$(WHITE)Compiling $(BWHITE)$<$(WHITE) file...$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf main.o
	@echo "$(BGREEN)cleaned like the blackhole you're getting if you DON'T GET TO COOKING$(WHITE)"

fclean: clean
	@rm -rf $(NAME)

re: fclean $(NAME)
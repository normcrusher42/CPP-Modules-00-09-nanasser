SRC = megaphone.cpp

NAME = megaphone

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

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
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf megaphone.o
	@echo "$(BGREEN)cleaned like the blackhole you guys are getting if you DON'T GET TO COOKING$(WHITE)"

fclean: clean
	@rm -rf $(NAME)

re: fclean $(NAME)
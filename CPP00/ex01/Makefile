SRC = main.cpp \
PhoneBook.cpp \
Contact.cpp \
Search.cpp

OBJ_PATH = obj/

NAME = EpicPhonebook

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -I.

OBJ = $(SRC:%.cpp=$(OBJ_PATH)%.o)

# Color codes ✨
WHITE = \033[0;37m
BRED = \033[1;31m
BWHITE = \033[1;37m
BGREEN = \033[1;32m
RESET = \033[0m

all: $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(BWHITE)$(NAME)$(WHITE) program is $(BGREEN)ready! $(RESET)✅"

$(OBJ_PATH)%.o : %.cpp
	@echo "$(WHITE)Compiling $(BWHITE)$<$(WHITE) program...$(RESET)"
	@mkdir -p $(OBJ_PATH)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_PATH)
	@echo "$(BGREEN)cleaned like the blackhole you're getting if you DON'T GET TO COOKING$(WHITE)"

fclean: clean
	@rm -rf $(NAME)

re: fclean $(NAME)
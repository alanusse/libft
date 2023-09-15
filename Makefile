NAME = libft.a

CC = gcc
CCFLAGS = -Wall -Wextra -Werror

# Directorios
SRC_DIR    = ./srcs/
OBJ_DIR    = ./obj/

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -rf $(NAME)
	@echo "(╯°□°）╯︵ ┻━┻ $(NAME) removido!"

re: fclean all
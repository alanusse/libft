NAME = libft.a
FLAGS = -Wall -Wextra -Werror

# Directorios
SRC_DIR    = ./srcs/
OBJ_DIR    = ./obj/

all: obj $(NAME)

clean:
   @rm -Rf $(OBJ_DIR)
   @echo "¯\_(ツ)_/¯ Objectos removidos!"

fclean: clean
   @rm -f $(NAME)
   @echo "(╯°□°）╯︵ ┻━┻ $(NAME) removido!"

re: fclean all
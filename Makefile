# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:     #
#                                                     +:+ +:+         +:+      #
#    By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/09 02:08:03 by agulanus          #+#    #+#              #
#    Updated: 2024/11/09 02:08:03 by agulanus         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
BONUS = .bonus

CC = cc
CFLAGS = -Wall -Wextra -Werror

RM = rm -rf
LIB = ar -rcs

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS_SRCS = ft_lstnew_bonus.c
INCLUDES = libft.h

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

RED = $(shell printf "\33[31m")
GREEN = $(shell printf "\33[32m")
WHITE = $(shell printf "\33[37m")
YELLOW = $(shell printf "\33[33m")
RESET = $(shell printf "\33[0m")
BLUE = $(shell printf "\33[34m")

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES) Makefile
	@$(LIB) $(NAME) $(OBJS)
	@printf "\n$(BLUE)[libft] $(WHITE)All files was compiled $(GREEN)successfully$(RESET)\n"
	@printf "$(BLUE)[libft] $(YELLOW)$(NAME) $(WHITE)file was created $(GREEN)successfully$(RESET)\n"

bonus: $(BONUS)

$(BONUS): $(NAME) $(BONUS_OBJS) Makefile
	@$(LIB) $(NAME) $(BONUS_OBJS)
	@touch $(BONUS)
	@printf "\n$(BLUE)[libft-bonus] $(WHITE)All bonus files was compiled $(GREEN)successfully$(RESET)\n"
	@printf "$(BLUE)[libft-bonus] $(YELLOW)$(NAME) $(WHITE)file was created $(GREEN)successfully$(RESET)\n"

%.o: %.c $(INCLUDES) Makefile
	@$(CC) -c $(CFLAGS) $< -o $@
	@printf "$(GREEN)·$(RESET)"

clean:
	@$(RM) $(OBJS) $(BONUS_OBJS)
	@printf "$(BLUE)[libft] $(WHITE)All object files was $(RED)removed\n"

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(BONUS)
	@printf "$(BLUE)[libft] $(WHITE)$(NAME) file was $(RED)removed\n"

re: fclean all

.PHONY: all bonus clean fclean re
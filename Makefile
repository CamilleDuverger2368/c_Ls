# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cduverge <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 15:13:23 by cduverge          #+#    #+#              #
#    Updated: 2019/06/10 20:18:15 by cduverge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : clean fclean all re

NAME	= ft_ls

SRC		=	main.c display.c elem.c error.c ls_core.c print.c recursion.c \
			size.c sort.c sort_ft.c time.c free.c

OBJ		= $(SRC:.c=.o)

CFLAGS	= -Wall -Wextra -Werror

$(NAME): $(OBJ)
		@make -C libft/
		@gcc $(OBJ) -o $(NAME) -L libft/ -lft

all: $(NAME)

clean:
		@make -C libft/ clean
		@rm -rf $(OBJ)

fclean: clean
		@make -C libft/ fclean
		@rm -rf $(NAME) $(OBJ)

re: fclean $(NAME)

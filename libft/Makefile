# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cduverge <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/10 20:09:46 by cduverge          #+#    #+#              #
#    Updated: 2019/06/06 12:29:49 by cduverge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc -Wall -Wextra -Werror -c
SRCS = ft_atoi.c \
			ft_swap.c \
			ft_power.c \
			ft_sqrt.c \
			ft_factorial.c \
			ft_count_words.c \
			ft_strrev.c \
			ft_is_sort.c \
			ft_strcapitalize.c \
			ft_lstmap.c \
			ft_lstiter.c \
			ft_lstadd.c \
			ft_lstdel.c \
			ft_lstdelone.c \
			ft_lstnew.c \
			ft_lstpushback.c \
			ft_itoa.c \
			ft_strtrim.c \
			ft_strmapi.c \
			ft_strmap.c \
			ft_striteri.c \
			ft_striter.c \
			ft_putnbr_fd.c \
			ft_putnbr.c \
			ft_strsplit.c \
			ft_strjoin.c \
			ft_strsub.c \
			ft_strnequ.c \
			ft_strequ.c \
			ft_putendl_fd.c \
			ft_putstr_fd.c \
			ft_putchar_fd.c \
			ft_putendl.c \
			ft_putstr.c \
			ft_putchar.c \
			ft_strclr.c \
			ft_strdel.c \
			ft_strnew.c \
			ft_memdel.c \
			ft_memalloc.c \
			ft_memmove.c \
			ft_memcmp.c \
			ft_memchr.c \
			ft_strlcat.c \
			ft_strrchr.c \
			ft_strchr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_memcpy.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memccpy.c \
			ft_memset.c \
			ft_strcat.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdup.c \
			ft_strlen.c \
			ft_strncat.c \
			ft_strncmp.c \
			ft_strncpy.c \
			ft_strnstr.c \
			ft_strstr.c
OBJ = ft_atoi.o \
	  ft_swap.o \
	  ft_power.o \
	  ft_sqrt.o \
	  ft_factorial.o \
	  ft_count_words.o \
	  ft_strrev.o \
	  ft_is_sort.o \
	  ft_strcapitalize.o \
	  ft_lstmap.o \
	  ft_lstiter.o \
	  ft_lstadd.o \
	  ft_lstdel.o \
	  ft_lstdelone.o \
	  ft_lstnew.o \
	  ft_lstpushback.o \
	  ft_itoa.o \
	  ft_strtrim.o \
	  ft_strmapi.o \
	  ft_strmap.o \
	  ft_striteri.o \
	  ft_striter.o \
	  ft_putnbr_fd.o \
	  ft_putnbr.o \
	  ft_strsplit.o \
	  ft_strjoin.o \
	  ft_strsub.o \
	  ft_strnequ.o \
	  ft_strequ.o \
	  ft_putendl_fd.o \
	  ft_putstr_fd.o \
	  ft_putchar_fd.o \
	  ft_putendl.o \
	  ft_putstr.o \
	  ft_putchar.o \
	  ft_strclr.o \
	  ft_strdel.o \
	  ft_strnew.o \
	  ft_memdel.o \
	  ft_memalloc.o \
	  ft_memmove.o \
	  ft_memcmp.o \
	  ft_memchr.o \
	  ft_strlcat.o \
	  ft_strrchr.o \
	  ft_strchr.o \
	  ft_tolower.o \
	  ft_toupper.o \
	  ft_memcpy.o \
	  ft_bzero.o \
	  ft_isalnum.o \
	  ft_isalpha.o \
	  ft_isascii.o \
	  ft_isdigit.o \
	  ft_isprint.o \
	  ft_memccpy.o \
	  ft_memset.o \
	  ft_strcat.o \
	  ft_strcmp.o \
	  ft_strcpy.o \
	  ft_strdup.o \
	  ft_strlen.o \
	  ft_strncat.o \
	  ft_strncmp.o \
	  ft_strncpy.o \
	  ft_strnstr.o \
	  ft_strstr.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(SRCS)
	ar rc $(NAME) $(OBJ)

.PHONY : clean

clean :
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

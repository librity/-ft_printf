# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpaulo-m@student.42sp.org.br <lpaulo-m>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/24 02:58:38 by lpaulo-m@st       #+#    #+#              #
#    Updated: 2021/02/26 02:24:49 by lpaulo-m@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CC_FLAGS = -Wall -Wextra -Werror
DEBUG_CC_FLAGS = -g -Wall -Wextra -Werror

REMOVE = /bin/rm -f
REMOVE_RECURSIVE = /bin/rm -rf
ARCHIVE_AND_INDEX = ar -rcs

HEADER = ft_printf.h

SOURCES = ft_printf.c ft_vprintf.c ft_putchar.c ft_putnbr.c ft_putstr.c \
	ft_strlen.c ft_count_digits.c
OBJECTS = $(subst .c,.o,$(SOURCES))

EXAMPLE_MAIN = example.c
EXECUTE_EXAMPLE = ./a.out
EXAMPLE_GARBAGE = a.out a.out.dSYM

all: $(NAME)

$(NAME): $(OBJECTS) $(HEADER)
	$(CC) $(CC_FLAGS) -c $(SOURCES)
	$(ARCHIVE_AND_INDEX) $(NAME) $(OBJECTS) 

example: $(NAME)
	$(CC) $(DEBUG_CC_FLAGS) $(EXAMPLE_MAIN) $(NAME)
	$(EXECUTE_EXAMPLE)

clean:
	$(REMOVE) $(OBJECTS)

fclean: clean
	$(REMOVE) $(NAME)

example_clean: fclean
	$(REMOVE_RECURSIVE) $(EXAMPLE_GARBAGE)

re: fclean all

.PHONY: all example re clean fclean example_clean

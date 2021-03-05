# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/24 02:58:38 by lpaulo-m@st       #+#    #+#              #
#    Updated: 2021/03/05 00:14:00 by lpaulo-m         ###   ########.fr        #
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

SOURCES = ft_printf.c ft_vprintf.c \
	\
	handled_no_conversion.c handled_double_percentage.c handled_s.c \
	handled_c.c handled_int.c handled_u.c handled_hex.c handled_p.c \
	\
	ft_isdigit.c ft_is_valid_base.c ft_strlen.c ft_strdel.c \
	\
	ft_count_digits.c ft_count_digits_ui.c ft_count_digits_i.c \
	ft_count_digits_ul.c ft_count_digits_hex_ul.c \
	\
	ft_putstr.c ft_putnbr_base_i.c ft_putnbr_base.c ft_putnbr_base_ul.c \
	ft_putnbr_base_ui.c ft_putnbr_i.c ft_putnbr.c ft_putchar.c ft_putnbr_ul.c \
	ft_putnbr_ui.c \
	\
	ft_puthex_uppercase.c ft_puthex_downcase.c
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

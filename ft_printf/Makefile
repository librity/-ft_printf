# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/24 02:58:38 by lpaulo-m@st       #+#    #+#              #
#    Updated: 2021/03/19 03:03:55 by lpaulo-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CC_FLAGS = -Wall -Wextra -Werror
DEBUG_CC_FLAGS = -g -Wall -Wextra -Werror -fsanitize=address -fno-omit-frame-pointer

REMOVE = /bin/rm -f
REMOVE_RECURSIVE = /bin/rm -rf
ARCHIVE_AND_INDEX = ar -rcs

SRC_PATH = ./src
OBJ_PATH = ./obj
LIB_PATH = ./lib
INC_PATH = -I ./include

HEADER = ft_printf.h

SOURCES = ft_printf.c ft_vprintf.c \
	\
	pf_parse_flags.c pf_parse_wildcars.c \
	\
	pf_handled_no_conversion.c pf_handled_percent.c pf_handled_s.c
	pf_handled_c.c pf_handled_int.c pf_handled_u.c \
	pf_handled_hex.c pf_handled_p.c \
	\
	pf_initializers.c \
	\
	pf_percent.c pf_c.c pf_s.c pf_int.c pf_u.c pf_p.c pf_hex.c
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

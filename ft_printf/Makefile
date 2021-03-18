# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/24 02:58:38 by lpaulo-m@st       #+#    #+#              #
#    Updated: 2021/03/17 22:06:51 by lpaulo-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CC_FLAGS = -Wall -Wextra -Werror
DEBUG_CC_FLAGS = -g
# DEBUG_CC_FLAGS = -g -Wall -Wextra -Werror

REMOVE = /bin/rm -f
REMOVE_RECURSIVE = /bin/rm -rf
ARCHIVE_AND_INDEX = ar -rcs

HEADER = ft_printf.h

SOURCES = ft_printf.c ft_vprintf.c \
	\
	parse_flags.c parse_wildcars.c \
	\
	handled_no_conversion.c handled_percent.c handled_s.c handled_c.c \
	handled_int.c handled_u.c handled_hex.c handled_p.c \
	\
	printf_initializers.c \
	\
	printf_percent.c printf_c.c printf_s.c printf_int.c printf_u.c printf_p.c \
	printf_hex.c \
	\
	ft_itoa.c ft_i_to_buffer.c ft_atoi.c ft_atoui.c ft_atoui_strict.c \
	\
	ft_putstr.c ft_putstr_up_to.c \
	\
	ft_is_valid_base.c ft_putnbr_base.c ft_putnbr_base_i.c \
	ft_putnbr_base_ul.c ft_putnbr_base_li.c ft_putnbr_base_ui.c \
	\
	ft_aux_handle_minus_sign_li.c \
	\
	ft_putnbr.c ft_putnbr_i.c ft_putnbr_ui.c ft_putnbr_li.c ft_putnbr_ul.c \
	\
	ft_putchar.c ft_putnbr_ul.c ft_putnbr_ui.c \
	ft_count_digits.c ft_count_digits_ui.c ft_count_digits_i.c \
	ft_count_digits_ul.c \
	\
	ft_count_digits_hex_ui.c ft_count_digits_hex_ul.c \
	\
	ft_count_chars_i.c \
	\
	ft_puthex_uppercase.c ft_puthex_downcase.c \
	\
	ft_skip_digits.c ft_skip_number.c \
	\
	ft_isdigit.c ft_is_whitespace.c ft_is_plus_or_minus.c ft_is_decimal_char.c \
	\
	ft_strlen.c ft_strdel.c ft_strlcat.c ft_strcpy.c ft_substr.c ft_strdup.c \
	ft_strchr.c ft_strnchr.c ft_memcpy.c \
	\
	ft_strjoin.c ft_strjoin_and_free.c ft_strjoin_and_free_free.c \
	ft_strjoin_and_del.c ft_strjoin_and_del_del.c \
	\
	unless.c
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

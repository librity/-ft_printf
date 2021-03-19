# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/24 02:58:38 by lpaulo-m@st       #+#    #+#              #
#    Updated: 2021/03/19 04:15:44 by lpaulo-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = libft

CC = gcc
CC_FLAGS = -Wall -Wextra -Werror
DEBUG_CC_FLAGS = -g -Wall -Wextra -Werror -fsanitize=address -fno-omit-frame-pointer

MAKE_EXTERNAL = make -C
SAFE_MAKEDIR = mkdir -p
COPY_LIBFT = cp libft/libft.a
ARCHIVE_AND_INDEX = ar -rcs

REMOVE = /bin/rm -f
REMOVE_RECURSIVE = /bin/rm -rf

OBJECTS_PATH = ./objects
SOURCES_PATH = ./sources
INCLUDES_PATH = ./includes

HEADER_FILE = ft_printf.h
HEADER = $(addprefix $(INCLUDES_PATH)/,$(HEADER_FILE))

SOURCE_FILES = ft_printf.c ft_vprintf.c \
	\
	pf_parse_flags.c pf_parse_wildcars.c \
	\
	pf_handled_no_conversion.c pf_handled_percent.c pf_handled_s.c \
	pf_handled_c.c pf_handled_int.c pf_handled_u.c \
	pf_handled_hex.c pf_handled_p.c \
	\
	pf_initializers.c \
	\
	pf_percent.c pf_c.c pf_s.c pf_int.c pf_u.c pf_p.c pf_hex.c
SOURCES = $(addprefix $(SOURCES_PATH)/,$(SOURCE_FILES))

OBJECTS = $(addprefix $(OBJECTS_PATH)/,$(subst .c,.o,$(SOURCE_FILES)))

EXAMPLE_MAIN = example.c
EXECUTE_EXAMPLE = ./a.out
EXAMPLE_GARBAGE = a.out a.out.dSYM

all: $(NAME)

$(NAME): libft $(OBJECTS) $(HEADER)
	$(ARCHIVE_AND_INDEX) $(NAME) $(OBJECTS) 

libft:
	$(MAKE_EXTERNAL) $(LIBFT)
	$(COPY_LIBFT) ./$(NAME)

$(OBJECTS_PATH)/%.o: $(SOURCES_PATH)/%.c $(HEADER)
	$(SAFE_MAKEDIR) $(OBJECTS_PATH)
	$(CC) $(CC_FLAGS) -I $(INCLUDES_PATH) -o $@ -c $<

example: $(NAME)
	$(CC) $(DEBUG_CC_FLAGS) -I $(INCLUDES_PATH) $(EXAMPLE_MAIN) $(NAME)
	$(EXECUTE_EXAMPLE)

libft_fclean:
	$(MAKE_EXTERNAL) $(LIBFT) fclean

clean:
	$(REMOVE) $(OBJECTS)

fclean: clean libft_fclean
	$(REMOVE) $(NAME)

example_clean: fclean
	$(REMOVE_RECURSIVE) $(EXAMPLE_GARBAGE)

re: fclean all

norme:
	norminette ./libft/
	@echo ----------------------
	norminette $(INCLUDES_PATH)
	@echo ----------------------
	norminette $(SOURCES_PATH)

git:
	git add -A
	git commit -m "update"
	git push

.PHONY: libft all example re libft_fclean clean fclean example_clean

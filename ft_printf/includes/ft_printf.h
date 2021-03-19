/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:17:10 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/19 04:23:31 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdbool.h>
# include <limits.h>

# ifndef ARG_MAX
#  define ARG_MAX 131072
# endif

# define NULL_STRING "(null)"

typedef struct	s_printf
{
	const char		*format;
	va_list			elements;
	int				chars_printed;
	unsigned int	conversion_position;
	char			conversion;
}				t_printf;

typedef struct	s_parse_flags
{
	char			parsed_flags[ARG_MAX];
	char			*flags;
	bool			has_wildcards;
	bool			is_left_padded_with_zeros;
	bool			is_left_justified;
	char			left_padder;
	bool			has_minimum_width;
	int				minimum_width;
	bool			has_precision;
	int				precision;
}				t_parse_flags;

typedef struct	s_parse_wildcards
{
	char			*found_wildcards;
	unsigned int	conversion_position;
	int				wildcard;
	size_t			parser;
}				t_parse_wildcards;

typedef struct	s_handle_percent
{
	unsigned char	print_me;
	int				char_count;
	t_parse_flags	flag_control;
}				t_handle_percent;

typedef struct	s_handle_c
{
	unsigned char	print_me;
	int				char_count;
	t_parse_flags	flag_control;
}				t_handle_c;

typedef struct	s_handle_s
{
	char			*print_me;
	size_t			length;
	size_t			precision_length;
	bool			is_null;
	t_parse_flags	flag_control;
}				t_handle_s;

typedef struct	s_handle_int
{
	long int		print_me;
	int				digit_count;
	int				char_count;
	bool			is_negative;
	bool			is_zero_with_zero_precision;
	t_parse_flags	flag_control;
}				t_handle_int;

typedef struct	s_handle_u
{
	unsigned int	print_me;
	int				digit_count;
	bool			is_zero_with_zero_precision;
	t_parse_flags	flag_control;
}				t_handle_u;

typedef struct	s_handle_p
{
	unsigned long	print_me;
	int				digit_count;
	bool			is_zero_with_zero_precision;
	t_parse_flags	flag_control;
}				t_handle_p;

typedef struct	s_handle_hex
{
	unsigned int	print_me;
	int				digit_count;
	bool			is_uppercase;
	bool			is_zero_with_zero_precision;
	t_parse_flags	flag_control;
}				t_handle_hex;

int				ft_printf(const char *format, ...);
void			ft_vprintf(t_printf *print_control);

void			initialize_print_control(t_printf *print_control,
											const char *format);
void			initialize_flag_control(t_printf *print_control,
											t_parse_flags *flag_control);
void			initialize_wildcard_control(t_printf *print_control,
											t_parse_flags *flag_control,
											t_parse_wildcards
											*wildcard_control);

bool			handled_no_conversion(t_printf *print_control);
bool			handled_percent(t_printf *print_control);
bool			handled_s(t_printf *print_control);
bool			handled_c(t_printf *print_control);
bool			handled_int(t_printf *print_control);
bool			handled_u(t_printf *print_control);
bool			handled_p(t_printf *print_control);
bool			handled_hex(t_printf *print_control);

void			parse_flags(t_printf *print_control, t_parse_flags *control);
void			parse_wildcars(t_printf *print_control,
								t_parse_flags *flag_control);

void			printf_percent(t_printf *print_control,
								t_handle_percent *control,
								t_parse_flags *flag_control);
void			printf_c(t_printf *print_control,
							t_handle_c *control,
							t_parse_flags *flag_control);
void			printf_s(t_printf *print_control,
							t_handle_s *control,
							t_parse_flags *flag_control);
void			printf_int(t_printf *print_control,
							t_handle_int *control,
							t_parse_flags *flag_control);
void			printf_u(t_printf *print_control,
							t_handle_u *control,
							t_parse_flags *flag_control);
void			printf_p(t_printf *print_control,
							t_handle_p *control,
							t_parse_flags *flag_control);
void			printf_hex(t_printf *print_control,
							t_handle_hex *control,
							t_parse_flags *flag_control);

#endif

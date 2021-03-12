/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:17:10 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/13 03:43:12 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdbool.h>
# include <limits.h>

// REMOVE THESE BEFORE SUBMITTING
#ifdef __linux__
# include <stdio.h>
# define ARG_MAX 131072
#endif
// REMOVE THESE BEFORE SUBMITTING

# define DECIMAL_BASE "0123456789"
# define DOWNCASE_HEX_BASE "0123456789abcdef"
# define UPPERCASE_HEX_BASE "0123456789ABCDEF"

typedef struct	s_printf
{
	const char		*format;
	va_list			elements;
	int				chars_printed;
	unsigned int	conversion_position;
	char			conversion;
}				t_printf;

typedef struct	s_handle_int
{
	long int		print_me;
	bool			is_negative;
	char			parsed_flags[ARG_MAX];
	char			*flags;
	unsigned int	digit_count;
	unsigned int	char_count;
	bool			has_wildcards;
	bool			is_left_justified;
	bool			is_left_padded_with_zeros;
	char			left_padder;
	bool			has_minimum_width;
	int				minimum_width;
	bool			has_precision;
	bool			is_zero_with_zero_precision;
	int				precision;
}				t_handle_int;

typedef struct	s_parse_wildcards
{
	char			*found_wildcards;
	unsigned int	conversion_position;
	int				wildcard;
	size_t			parser;
}				t_parse_wildcards;

int				ft_printf(const char *format, ...);
void			ft_vprintf(t_printf *print_control);

void			initialize_print_control(t_printf *print_control,
											const char *format);
void			initialize_int_control(t_printf *print_control,
											t_handle_int *int_control);
void			initialize_wildcard_control(t_printf *print_control,
										t_handle_int *int_control,
										t_parse_wildcards *wildcard_control);

bool			handled_no_conversion(t_printf *print_control);
bool			handled_double_percent(t_printf *print_control);

bool			handled_s(t_printf *print_control);
bool			handled_c(t_printf *print_control);
bool			handled_int(t_printf *print_control);
bool			handled_u(t_printf *print_control);
bool			handled_p(t_printf *print_control);
bool			handled_hex(t_printf *print_control);

void			parse_flags(t_printf *print_control, t_handle_int *int_control);
void			parse_wildcars(t_printf *print_control,
								t_handle_int *int_control);

void			ft_putchar(char c);
void			ft_putstr(char *s);
void			ft_putstr_up_to(char *s, size_t up_to);
void			ft_putendl(char *s);

bool			ft_is_valid_base(const char *base, const size_t base_length);
void			ft_putnbr_base(int number, char *base);
void			ft_putnbr_base_i(int number, char *base);
void			ft_putnbr_base_ui(unsigned int number, const char *base);
void			ft_putnbr_base_ul(unsigned long number, const char *base);
void			ft_putnbr_base_li(long int number, const char *base);

void			ft_putnbr(int n);
void			ft_putnbr_i(int number);
void			ft_putnbr_ui(unsigned int number);
void			ft_putnbr_ul(unsigned long number);
void			ft_putnbr_li(long int number);

void			ft_puthex_uppercase(unsigned int number);
void			ft_puthex_downcase(unsigned int number);

char			*ft_itoa(int n);
unsigned int	ft_i_to_buffer(int n, char *buffer);
int				ft_atoi(const char *number_pointer);
unsigned int	ft_atoui(const char *number_pointer);
unsigned int	ft_atoui_strict(const char *number_pointer);

unsigned int	ft_count_digits(int number);
unsigned int	ft_count_digits_i(int number);
unsigned int	ft_count_digits_i(int number);
unsigned int	ft_count_digits_ui(unsigned int number);
unsigned int	ft_count_digits_ul(unsigned long number);

unsigned int	ft_count_digits_hex_ui(unsigned int number);
unsigned int	ft_count_digits_hex_ul(unsigned long number);

unsigned int	ft_count_chars_i(int number);

char			*ft_skip_digits(char *digits);
char			*ft_skip_number(char *digits);

bool			ft_isdigit(int c);
bool			ft_is_whitespace(char character);
bool			ft_is_plus_or_minus(char character);
bool			ft_is_decimal_char(char character);

size_t			ft_strlen(const char *s);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strcpy(char *dest, char *src);
void			ft_strdel(char **delete_me);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strdup(const char *s);
char			*ft_strchr(const char *s, int c);
char			*ft_strnchr(const char *s, int c, unsigned int limit);
void			*ft_memcpy(void *dest, const void *src, size_t n);

char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strjoin_and_free(char *free_me, char const *dont_free_me);
char			*ft_strjoin_and_free_free(char *free_me, char *free_me_too);
char			*ft_strjoin_and_del(char *delete_me,
									char const *dont_delete_me);
char			*ft_strjoin_and_del_del(char *delete_me, char *delete_me_too);

bool	unless(bool condition);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:17:10 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/05 15:59:20 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdbool.h>

# define DECIMAL_BASE "0123456789"
# define DOWNCASE_HEX_BASE "0123456789abcdef"
# define UPPERCASE_HEX_BASE "0123456789ABCDEF"

typedef struct	s_printf
{
	const char	*format;
	va_list		elements;
	int			chars_printed;
	int			conversion_position;
	char		conversion;
}				t_printf;

typedef struct	s_handle_int
{
	int print_me;
	int char_count;
	int minimum_width;
}				t_handle_int;

int				ft_printf(const char *format, ...);
void			ft_vprintf(t_printf *print_control);

bool			handled_no_conversion(t_printf *print_control);
bool			handled_double_percentage(t_printf *print_control);

bool			handled_s(t_printf *print_control);
bool			handled_c(t_printf *print_control);
bool			handled_int(t_printf *print_control);
bool			handled_u(t_printf *print_control);
bool			handled_p(t_printf *print_control);
bool			handled_hex(t_printf *print_control);

void			ft_putchar(char c);
void			ft_putstr(char *s);
void			ft_putendl(char *s);

bool			ft_is_valid_base(const char *base, const size_t base_length);
void			ft_putnbr_base(int number, char *base);
void			ft_putnbr_base_i(int number, char *base);
void			ft_putnbr_base_ui(unsigned int number, const char *base);
void			ft_putnbr_base_ul(unsigned long number, const char *base);

void			ft_putnbr(int n);
void			ft_putnbr_i(int number);
void			ft_putnbr_ui(int number);
void			ft_putnbr_ul(int number);

void			ft_puthex_uppercase(unsigned int number);
void			ft_puthex_downcase(unsigned int number);

int				ft_atoi(const char *number_pointer);
char			*ft_itoa(int n);

unsigned int	ft_count_digits(int number);
unsigned int	ft_count_digits_i(int number);
unsigned int	ft_count_digits_i(int number);
unsigned int	ft_count_digits_ui(unsigned int number);
unsigned int	ft_count_digits_ul(unsigned long number);
unsigned int	ft_count_digits_hex_ul(unsigned long number);

unsigned int	ft_count_chars_i(int number);

bool			ft_isdigit(int c);
bool			ft_is_whitespace(char character);
bool			ft_is_plus_or_minus(char character);

size_t			ft_strlen(const char *s);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strcpy(char *dest, char *src);
void			ft_strdel(char **delete_me);

char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strjoin_and_free(char *free_me, char const *dont_free_me);
char			*ft_strjoin_and_free_free(char *free_me, char *free_me_too);
char			*ft_strjoin_and_del(char *delete_me, char const *dont_delete_me);
char			*ft_strjoin_and_del_del(char *delete_me, char *delete_me_too);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:17:10 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/04 20:21:43 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdbool.h>

# define DOWNCASE_HEX_BASE "0123456789abcdef"
# define UPPERCASE_HEX_BASE "0123456789ABCDEF"

int	ft_isdigit(int c);

size_t	ft_strlen(const char *s);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putendl(char *s);

void	ft_putnbr(int n);
void	ft_putnbr_hex(unsigned int number, const char *base);
void	ft_putnbr_base(unsigned long number, const char *base);

void	ft_puthex_uppercase(unsigned int number);
void	ft_puthex_downcase(unsigned int number);

int		ft_count_digits(int number);
int		ft_count_udigits(unsigned int number);
int		ft_count_uldigits(unsigned long number);
int		ft_count_uldigits_hex(unsigned long number);

bool	handled_no_conversion(const char **format, int *chars_printed);
bool	handled_double_percentage(const char **format, int *chars_printed);

bool	handled_string(const char **format,
					int *chars_printed,
					int conversion_posistion,
					va_list elements);
bool	handled_char(const char **format,
					int *chars_printed,
					int conversion_posistion,
					va_list elements);
bool	handled_int(const char **format,
					int *chars_printed,
					int conversion_posistion,
					va_list elements);
bool	handled_uint(const char **format,
					int *chars_printed,
					int conversion_posistion,
					va_list elements);
bool	handled_pointer(const char **format,
						int *chars_printed,
						int conversion_posistion,
						va_list elements);
bool	handled_hex(const char **format,
						int *chars_printed,
						int conversion_posistion,
						va_list elements);

int		ft_printf(const char *format, ...);
int		ft_vprintf(const char *format, va_list elements);

#endif

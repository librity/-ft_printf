/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:17:10 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/03 06:33:07 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdbool.h>

void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putendl(char *s);
void	ft_putnbr(int n);

size_t	ft_strlen(const char *s);
size_t	ft_count_digits(int n);

bool	handled_unformatted(const char **format, int *chars_printed);
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

int		ft_printf(const char *format, ...);
int		ft_vprintf(const char *format, va_list elements);

#endif

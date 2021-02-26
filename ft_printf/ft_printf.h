/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 03:00:55 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/02/26 03:16:00 by lpaulo-m         ###   ########.fr       */
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

bool	handle_unformatted(const char **format, int *chars_printed);
bool	handle_double_percentage(const char **format, int *chars_printed);

void	handle_string(int *chars_printed, char *print_me);
void	handle_char(int *chars_printed, unsigned char print_me);
void	handle_int(int *chars_printed, int print_me);

int		ft_printf(const char *format, ...);
int		ft_vprintf(const char *format, va_list elements);

#endif

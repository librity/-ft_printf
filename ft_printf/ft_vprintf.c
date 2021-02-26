/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m@student.42sp.org.br <lpaulo-m>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 00:50:35 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/02/26 02:20:17 by lpaulo-m@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_vprintf(const char *format, va_list elements)
{
	int chars_printed;
	char *current_string;

	chars_printed = 0;
	while (*format != '\0')
	{
		if (*format != '%')
		{
			ft_putchar(*format++);
			chars_printed++;
			continue;
		}
		if (*format == '%' && *(format + 1) == '%')
		{
			ft_putchar(*format);
			format += 2;
			chars_printed++;
			continue;
		}
		switch (*(++format))
		{
		case 's':
			current_string = va_arg(elements, char *);
			ft_putstr(current_string);
			chars_printed += ft_strlen(current_string);
			format++;
		}
	}
	return (chars_printed);
}

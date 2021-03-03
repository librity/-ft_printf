/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:18:05 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/03 04:06:46 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool	is_a_flag(char current_char)
{
	if (current_char == '.')
		return (true);
	if (current_char == '-')
		return (true);
	if (current_char == '*')
		return (true);
	if (current_char == '0')
		return (true);
	return (false);
}

char	get_current_conversion(const char *format)
{
	while (is_a_flag(*format) && *format != '\0')
		format++;
	return (*format);
}

int		ft_vprintf(const char *format, va_list elements)
{
	int		chars_printed;
	char	conversion;

	chars_printed = 0;
	while (*format != '\0')
	{
		if (handled_unformatted(&format, &chars_printed))
			continue;
		if (handled_double_percentage(&format, &chars_printed))
			continue;
		format++;
		conversion = get_current_conversion(format);
		if (handled_string(&format, &chars_printed, conversion, elements))
			continue;
		if (handled_int(&format, &chars_printed, conversion, elements))
			continue;
		if (handled_char(&format, &chars_printed, conversion, elements))
			continue;
	}
	return (chars_printed);
}

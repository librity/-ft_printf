/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:18:05 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/04 20:22:25 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static bool	is_a_flag(char current_char)
{
	if (current_char == '.')
		return (true);
	if (current_char == '-')
		return (true);
	if (current_char == '*')
		return (true);
	if (ft_isdigit(current_char))
		return (true);
	return (false);
}

static int	find_current_conversion_position(const char *format)
{
	int conversion_posistion;

	conversion_posistion = 0;
	while (is_a_flag(format[conversion_posistion]) &&
			format[conversion_posistion] != '\0')
		conversion_posistion++;
	return (conversion_posistion);
}

int			ft_vprintf(const char *format, va_list elements)
{
	int	chars_printed;
	int	conversion_pos;

	chars_printed = 0;
	while (*format != '\0')
	{
		if (handled_no_conversion(&format, &chars_printed))
			continue;
		if (handled_double_percentage(&format, &chars_printed))
			continue;
		conversion_pos = find_current_conversion_position(++format);
		if (handled_string(&format, &chars_printed, conversion_pos, elements))
			continue;
		if (handled_char(&format, &chars_printed, conversion_pos, elements))
			continue;
		if (handled_int(&format, &chars_printed, conversion_pos, elements))
			continue;
		if (handled_uint(&format, &chars_printed, conversion_pos, elements))
			continue;
		if (handled_pointer(&format, &chars_printed, conversion_pos, elements))
			continue;
		if (handled_hex(&format, &chars_printed, conversion_pos, elements))
			continue;
	}
	return (chars_printed);
}

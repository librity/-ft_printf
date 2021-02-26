/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 00:50:35 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/02/26 03:20:38 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_vprintf(const char *format, va_list elements)
{
	int chars_printed;

	chars_printed = 0;
	while (*format != '\0')
	{
		if (handle_unformatted(&format, &chars_printed))
			continue;
		if (handle_double_percentage(&format, &chars_printed))
			continue;
		switch (*(++format))
		{
		case 's':
			handle_string(&chars_printed, va_arg(elements, char *));
			break ;
		case 'd':
		case 'i':
			handle_int(&chars_printed, va_arg(elements, int));
			break ;
		case 'c':
			handle_char(&chars_printed, (unsigned char)va_arg(elements, int));
			break ;
		}
		format++;
	}
	return (chars_printed);
}

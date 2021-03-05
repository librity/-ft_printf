/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:16:34 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/05 04:00:33 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	initialize_control(t_printf *print_control, const char *format)
{
	print_control->format = format;
	print_control->chars_printed = 0;
	print_control->conversion_position = 0;
	print_control->conversion = '\0';
}

int			ft_printf(const char *format, ...)
{
	t_printf	print_control;

	initialize_control(&print_control, format);
	va_start(print_control.elements, format);
	ft_vprintf(&print_control);
	va_end(print_control.elements);
	return (print_control.chars_printed);
}

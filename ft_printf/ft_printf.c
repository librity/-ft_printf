/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m@student.42sp.org.br <lpaulo-m>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 21:17:04 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/02/26 00:50:24 by lpaulo-m@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list elements;
	int chars_printed;

	va_start(elements, format);
	chars_printed = ft_vprintf(format, elements);
	va_end(elements);
	return (chars_printed);
}

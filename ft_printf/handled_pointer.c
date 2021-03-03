/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/03 07:48:39 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool	handled_pointer(const char **format,
						int *chars_printed,
						int conversion_posistion,
						va_list elements)
{
	size_t print_me;

	if (*format[conversion_posistion] != 'p')
		return (false);
	print_me = va_arg(elements, size_t);
	ft_putstr("0x");
	ft_puthex_downcase(print_me);
	*chars_printed += ft_hex_count_digits(print_me) + 2;
	(*format) += conversion_posistion + 1;
	return (true);
}

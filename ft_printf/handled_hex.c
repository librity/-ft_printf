/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/04 18:58:15 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool	handled_hex(const char **format,
						int *chars_printed,
						int conversion_posistion,
						va_list elements)
{
	unsigned int print_me;

	if (*format[conversion_posistion] != 'x' &&
		*format[conversion_posistion] != 'X')
		return (false);
	print_me = va_arg(elements, unsigned int);
	if (*format[conversion_posistion] == 'x')
		ft_puthex_downcase(print_me);
	else
		ft_puthex_uppercase(print_me);
	*chars_printed += 8;
	(*format) += conversion_posistion + 1;
	return (true);
}

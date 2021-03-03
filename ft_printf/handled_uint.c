/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_uint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/03 06:32:39 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool	handled_uint(const char **format,
					int *chars_printed,
					int conversion_posistion,
					va_list elements)
{
	unsigned int print_me;

	if (*format[conversion_posistion] != 'u')
		return (false);
	print_me = va_arg(elements, unsigned int);
	ft_putnbr(print_me);
	*chars_printed += ft_count_digits(print_me);
	(*format) += conversion_posistion + 1;
	return (true);
}

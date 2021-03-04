/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/04 19:48:27 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool	handled_pointer(const char **format,
						int *chars_printed,
						int conversion_posistion,
						va_list elements)
{
	unsigned long print_me;

	if ((*format)[conversion_posistion] != 'p')
		return (false);
	print_me = va_arg(elements, unsigned long);
	if (print_me == (unsigned long)0)
	{
		ft_putstr("(null)");
		*chars_printed += 6;
		(*format) += conversion_posistion + 1;
		return (true);
	}
	ft_putstr("0x");
	ft_putnbr_base(print_me, DOWNCASE_HEX_BASE);
	*chars_printed += ft_count_uldigits_hex(print_me) + 2;
	(*format) += conversion_posistion + 1;
	return (true);
}

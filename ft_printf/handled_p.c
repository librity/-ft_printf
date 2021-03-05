/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/05 00:05:40 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool	handled_p(const char **format,
						int *chars_printed,
						int conversion_posistion,
						va_list elements)
{
	unsigned long print_me;

	if ((*format)[conversion_posistion] != 'p')
		return (false);
	print_me = va_arg(elements, unsigned long);
	if (print_me == 0)
	{
		ft_putstr("(nil)");
		*chars_printed += 5;
		(*format) += conversion_posistion + 1;
		return (true);
	}
	ft_putstr("0x");
	ft_putnbr_base_ul(print_me, DOWNCASE_HEX_BASE);
	*chars_printed += ft_count_digits_hex_ul(print_me) + 2;
	(*format) += conversion_posistion + 1;
	return (true);
}

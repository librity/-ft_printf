/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/05 03:40:17 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool	handled_p(t_printf *print_control)
{
	unsigned long print_me;

	if ((print_control->format)[print_control->conversion_position] != 'p')
		return (false);
	print_me = va_arg(print_control->elements, unsigned long);
	if (print_me == 0)
	{
		ft_putstr("(nil)");
		(print_control->chars_printed) += 5;
		(print_control->format) += (print_control->conversion_position) + 1;
		return (true);
	}
	ft_putstr("0x");
	ft_putnbr_base_ul(print_me, DOWNCASE_HEX_BASE);
	(print_control->chars_printed) += ft_count_digits_hex_ul(print_me) + 2;
	(print_control->format) += (print_control->conversion_position) + 1;
	return (true);
}

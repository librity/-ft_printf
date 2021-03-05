/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/05 04:05:56 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool	handled_hex(t_printf *print_control)
{
	unsigned int print_me;

	if (print_control->conversion != 'x' && print_control->conversion != 'X')
		return (false);
	print_me = va_arg(print_control->elements, unsigned int);
	if (print_control->conversion == 'x')
		ft_puthex_downcase(print_me);
	else
		ft_puthex_uppercase(print_me);
	(print_control->chars_printed) += 8;
	(print_control->format) += (print_control->conversion_position) + 1;
	return (true);
}

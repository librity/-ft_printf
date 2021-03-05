/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/05 03:39:38 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool	handled_int(t_printf *print_control)
{
	int print_me;

	if ((print_control->format)[print_control->conversion_position] != 'd' &&
		(print_control->format)[print_control->conversion_position] != 'i')
		return (false);
	print_me = va_arg(print_control->elements, int);
	ft_putnbr_i(print_me);
	if (print_me < 0)
		(print_control->chars_printed)++;
	(print_control->chars_printed) += ft_count_digits_i(print_me);
	(print_control->format) += (print_control->conversion_position) + 1;
	return (true);
}

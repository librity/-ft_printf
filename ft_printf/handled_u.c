/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/05 03:41:34 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool	handled_u(t_printf *print_control)
{
	unsigned int print_me;

	if ((print_control->format)[print_control->conversion_position] != 'u')
		return (false);
	print_me = va_arg(print_control->elements, unsigned int);
	ft_putnbr_ui(print_me);
	(print_control->chars_printed) += ft_count_digits_ui(print_me);
	(print_control->format) += (print_control->conversion_position) + 1;
	return (true);
}

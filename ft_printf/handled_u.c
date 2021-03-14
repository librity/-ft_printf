/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/14 11:46:40 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	set_print_me(t_printf *print_control, t_handle_u *control)
{
	control->print_me = va_arg(print_control->elements, unsigned int);
	control->digit_count = ft_count_digits_ui(control->print_me);
}

bool	handled_u(t_printf *print_control)
{
	t_handle_u		control;
	t_parse_flags	*flag_control;

	if (print_control->conversion != 'u')
		return (false);
	initialize_u_control(print_control, &control);
	flag_control = &(control.flag_control);
	parse_flags(print_control, flag_control);
	set_print_me(print_control, &control);
	if (flag_control->has_precision)
		if (flag_control->precision == 0 && control.print_me == 0)
			control.is_zero_with_zero_precision = true;
	printf_u(print_control, &control, flag_control);
	return (true);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/14 15:31:06 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	set_print_me(t_printf *print_control, t_handle_p *control)
{
	control->print_me = va_arg(print_control->elements, unsigned long);
	control->is_null = (control->print_me == 0);
	if (control->is_null)
		control->digit_count = 5;
	else
		control->digit_count = ft_count_digits_hex_ul(control->print_me) + 2;
}

static void	initialize_control(t_printf *print_control,
									t_handle_p *control)
{
	control->print_me = 0;
	control->digit_count = 0;
	control->is_null = false;
	initialize_flag_control(print_control, &(control->flag_control));
}

bool	handled_p(t_printf *print_control)
{
	t_handle_p	control;
	t_parse_flags	*flag_control;

	if (print_control->conversion != 'p')
		return (false);
	initialize_control(print_control, &control);
	flag_control = &(control.flag_control);
	parse_flags(print_control, flag_control);
	set_print_me(print_control, &control);
	printf_p(print_control, &control, flag_control);
	return (true);
}

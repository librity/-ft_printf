/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_percent.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/18 01:24:30 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	initialize_control(t_printf *print_control, t_handle_c *control)
{
	control->print_me = '%';
	control->char_count = 1;
	initialize_flag_control(print_control, &(control->flag_control));
}

bool		handled_percent(t_printf *print_control)
{
	t_handle_c	control;
	t_parse_flags		*flag_control;
	
	if (print_control->conversion != '%')
		return (false);
	initialize_control(print_control, &control);
	flag_control = &(control.flag_control);
	parse_flags(print_control, flag_control);
	ft_putchar(control.print_me);
	(print_control->chars_printed) += control.char_count;
	return (true);
}

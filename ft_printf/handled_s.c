/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:59 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/17 22:09:15 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	set_print_me(t_printf *print_control, t_handle_s *control)
{
	control->print_me = va_arg(print_control->elements, char *);
	control->is_null = (control->print_me == NULL);
	if (control->is_null)
		control->length = 6;
	else
		control->length = ft_strlen(control->print_me);
}

static void	initialize_control(t_printf *print_control, t_handle_s *control)
{
	control->print_me = NULL;
	control->length = 0;
	control->is_null = false;
	initialize_flag_control(print_control, &(control->flag_control));
}

bool		handled_s(t_printf *print_control)
{
	t_handle_s	control;
	t_parse_flags	*flag_control;

	if (print_control->conversion != 's')
		return (false);
	initialize_control(print_control, &control);
	flag_control = &(control.flag_control);
	parse_flags(print_control, flag_control);
	set_print_me(print_control, &control);
	printf_s(print_control, &control, flag_control);
	return (true);
}

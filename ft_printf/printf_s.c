/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/17 23:14:43 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void handle_padding(t_printf *print_control,
						   t_handle_s *control,
						   t_parse_flags *flag_control)
{
	int padding;

	if (flag_control->has_precision)
		if (flag_control->precision >= flag_control->minimum_width)
			return;
	if (flag_control->has_precision)
		padding = flag_control->minimum_width - flag_control->precision;
	else
		padding = flag_control->minimum_width - control->length;
	if (padding <= 0)
		return;
	(print_control->chars_printed) += padding;
	while (padding--)
		ft_putchar(flag_control->left_padder);
}

static void	handle_printing(t_printf *print_control,
							t_handle_s *control,
							t_parse_flags *flag_control)
{
	if (control->is_null)
	{
		ft_putstr("(null)");
		(print_control->chars_printed) += 6;
		return;
	}
	if (flag_control->has_precision)
	{
		ft_putstr_up_to(control->print_me, flag_control->precision);
		if ((size_t)flag_control->precision < control->length)
			(print_control->chars_printed) += flag_control->precision;
		else
			(print_control->chars_printed) += control->length;
		return;
	}
	ft_putstr(control->print_me);
	(print_control->chars_printed) += control->length;
}

void		printf_s(t_printf *print_control,
						t_handle_s *control,
						t_parse_flags *flag_control)
{
	if (unless(flag_control->is_left_justified))
		handle_padding(print_control, control, flag_control);
	handle_printing(print_control, control, flag_control);
	if (flag_control->is_left_justified)
		handle_padding(print_control, control, flag_control);
}

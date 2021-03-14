/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/14 10:41:51 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_precision(t_printf *print_control,
								t_handle_int *control,
								t_parse_flags *flag_control)
{
	int		precision;

	if (unless(flag_control->has_precision))
		return ;
	if (flag_control->precision < (int)control->digit_count)
		return ;
	precision = flag_control->precision - control->digit_count;
	if (precision < 0)
		precision = 0;
	(print_control->chars_printed) += precision;
	while (precision--)
		ft_putchar('0');
}

static void	handle_padding(t_printf *print_control,
							t_handle_int *control,
							t_parse_flags *flag_control)
{
	int	padding;

	if (flag_control->has_precision)
		if (flag_control->precision >= flag_control->minimum_width)
			if (unless(control->is_zero_with_zero_precision))
				return ;
	if (flag_control->has_precision &&
		(flag_control->precision > control->char_count))
		padding = flag_control->minimum_width - flag_control->precision;
	else
		padding = flag_control->minimum_width - control->char_count;
	if (control->is_negative)
		if (flag_control->has_minimum_width && flag_control->has_precision)
			if (flag_control->precision > control->digit_count)
				padding--;
	if (control->is_zero_with_zero_precision)
		padding++;
	if (padding <= 0)
		return ;
	(print_control->chars_printed) += padding;
	while (padding--)
		ft_putchar(flag_control->left_padder);
}

static void	handle_left(t_printf *print_control,
						t_handle_int *control,
						t_parse_flags *flag_control)
{
	if (flag_control->is_left_padded_with_zeros)
	{
		ft_aux_handle_negative_li(&(control->print_me));
		if (unless(flag_control->is_left_justified))
			handle_padding(print_control, control, flag_control);
		handle_precision(print_control, control, flag_control);
		return ;
	}
	if (unless(flag_control->is_left_justified))
		handle_padding(print_control, control, flag_control);
	ft_aux_handle_negative_li(&(control->print_me));
	handle_precision(print_control, control, flag_control);
}

static void	handle_printing(t_printf *print_control,
							t_handle_int *control,
							t_parse_flags *flag_control)
{
	handle_left(print_control, control, flag_control);
	if (control->is_zero_with_zero_precision)
		return ;
	ft_putnbr_li(control->print_me);
	(print_control->chars_printed) += control->char_count;
}

static void	set_print_me(t_printf *print_control, t_handle_int *control)
{
	control->print_me = va_arg(print_control->elements, int);
	control->char_count = ft_count_chars_i(control->print_me);
	control->digit_count = ft_count_digits_i(control->print_me);
	if (control->print_me < 0)
		control->is_negative = true;
}

bool		handled_int(t_printf *print_control)
{
	t_handle_int	control;
	t_parse_flags	*flag_control;

	flag_control = &(control.flag_control);
	if (print_control->conversion != 'd' && print_control->conversion != 'i')
		return (false);
	initialize_int_control(print_control, &control);
	parse_flags(print_control, flag_control);
	set_print_me(print_control, &control);
	if (flag_control->has_precision)
		if (flag_control->precision == 0 && control.print_me == 0)
			control.is_zero_with_zero_precision = true;
	handle_printing(print_control, &control, flag_control);
	if (flag_control->is_left_justified)
		handle_padding(print_control, &control, flag_control);
	return (true);
}

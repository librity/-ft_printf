/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/14 09:21:07 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_precision(t_printf *print_control,
								t_handle_int *int_control)
{
	int		precision;

	if (unless(int_control->has_precision))
		return ;
	if (int_control->precision < (int)int_control->digit_count)
		return ;
	precision = int_control->precision - int_control->digit_count;
	if (precision < 0)
		precision = 0;
	(print_control->chars_printed) += precision;
	while (precision--)
		ft_putchar('0');
}

static void	handle_padding(t_printf *print_control, t_handle_int *int_control)
{
	int	padding;

	if (int_control->has_precision)
		if (int_control->precision >= int_control->minimum_width)
			if (unless(int_control->is_zero_with_zero_precision))
				return ;
	if (int_control->has_precision &&
		(int_control->precision > int_control->char_count))
		padding = int_control->minimum_width - int_control->precision;
	else
		padding = int_control->minimum_width - int_control->char_count;
	if (int_control->is_negative)
		if (int_control->has_minimum_width && int_control->has_precision)
			if (int_control->precision > int_control->digit_count)
				padding--;
	if (int_control->is_zero_with_zero_precision)
		padding++;
	if (padding <= 0)
		return ;
	(print_control->chars_printed) += padding;
	while (padding--)
		ft_putchar(int_control->left_padder);
}

static void	handle_negative(t_handle_int *int_control)
{
	if (int_control->is_negative)
	{
		ft_putchar('-');
		int_control->print_me *= -1;
	}
}

static void	handle_left(t_printf *print_control, t_handle_int *int_control)
{
	if (int_control->is_left_padded_with_zeros)
	{
		handle_negative(int_control);
		if (unless(int_control->is_left_justified))
			handle_padding(print_control, int_control);
		handle_precision(print_control, int_control);
		return ;
	}
	if (unless(int_control->is_left_justified))
		handle_padding(print_control, int_control);
	handle_negative(int_control);
	handle_precision(print_control, int_control);
}

static void	handle_printing(t_printf *print_control, t_handle_int *int_control)
{
	handle_left(print_control, int_control);
	if (int_control->is_zero_with_zero_precision)
		return ;
	ft_putnbr_li(int_control->print_me);
	(print_control->chars_printed) += int_control->char_count;
}

bool		handled_int(t_printf *print_control)
{
	t_handle_int int_control;

	if (print_control->conversion != 'd' && print_control->conversion != 'i')
		return (false);
	initialize_int_control(print_control, &int_control);
	parse_flags(print_control, &int_control);
	if (int_control.has_precision)
		if (int_control.precision == 0 && int_control.print_me == 0)
			int_control.is_zero_with_zero_precision = true;
	handle_printing(print_control, &int_control);
	if (int_control.is_left_justified)
		handle_padding(print_control, &int_control);
	return (true);
}

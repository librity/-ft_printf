/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/12 02:32:28 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_minimum_width(t_printf *print_control,
								t_handle_int *int_control)
{
	int minimum_width;

	if (int_control->has_minimum_width == false)
		return ;
	minimum_width = int_control->minimum_width - int_control->char_count;
	if (int_control->print_as_padding)
		minimum_width++;
	if (minimum_width < 0)
		minimum_width = 0;
	(print_control->chars_printed) += minimum_width;
	while (minimum_width--)
		ft_putchar(' ');
}

static void	handle_precision(t_printf *print_control,
								t_handle_int *int_control)
{
	int precision_padding;

	if (int_control->digit_count > (unsigned int)int_control->precision)
		return ;
	precision_padding = int_control->precision - int_control->digit_count;
	if (int_control->print_me < 0 && int_control->has_precision == false)
		precision_padding--;
	if (precision_padding < 0)
		precision_padding = 0;
	(print_control->chars_printed) += precision_padding;
	while (precision_padding--)
		ft_putchar('0');
}

static void	handle_printing(t_printf *print_control, t_handle_int *int_control)
{
	long int print_me;

	print_me = int_control->print_me;
	if (int_control->print_as_padding)
		return ;
	if (print_me < 0)
	{
		ft_putchar('-');
		print_me *= -1;
	}
	handle_precision(print_control, int_control);
	ft_putnbr_li(print_me);
	(print_control->chars_printed) += int_control->char_count;
}

static void	handle_right_padding(t_printf *print_control,
									t_handle_int *int_control)
{
	int right_padding;

	if (int_control->has_right_padding == false)
		return ;
	right_padding = int_control->right_padding - int_control->char_count;
	if (int_control->print_as_padding)
		right_padding++;
	if (right_padding <= 0)
		return ;
	(print_control->chars_printed) += right_padding;
	while (right_padding--)
		ft_putchar(' ');
}

bool		handled_int(t_printf *print_control)
{
	t_handle_int int_control;

	if (print_control->conversion != 'd' && print_control->conversion != 'i')
		return (false);
	initialize_int_control(print_control, &int_control);
	parse_flags(print_control, &int_control);
	handle_minimum_width(print_control, &int_control);
	handle_printing(print_control, &int_control);
	handle_right_padding(print_control, &int_control);
	return (true);
}

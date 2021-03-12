/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/12 09:06:18 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_right_padding(t_printf *print_control,
									t_handle_int *int_control)
{
	int right_padding;

	if (unless(int_control->is_left_justified))
		return ;
	right_padding = int_control->minimum_width - int_control->char_count;
	if (right_padding <= 0)
		return ;
	(print_control->chars_printed) += right_padding;
	while (right_padding--)
		ft_putchar(' ');
}

static void	handle_field_width(t_printf *print_control,
								t_handle_int *int_control)
{
	int		precision_padding;
	char	padder;

	if (int_control->is_left_justified)
		return ;
	precision_padding = int_control->minimum_width - int_control->digit_count;
	if (precision_padding < 0)
		precision_padding = 0;
	(print_control->chars_printed) += precision_padding;
	padder = int_control->is_left_padded_with_zeros ? '0' : ' ';
	while (precision_padding--)
		ft_putchar(padder);
}

static void	handle_printing(t_printf *print_control, t_handle_int *int_control)
{
	if (int_control->is_negative)
	{
		ft_putchar('-');
		int_control->print_me *= -1;
	}
	handle_field_width(print_control, int_control);
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
	handle_printing(print_control, &int_control);
	handle_right_padding(print_control, &int_control);
	return (true);
}

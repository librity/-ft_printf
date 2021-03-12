/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/11 21:28:09 by lpaulo-m         ###   ########.fr       */
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
		ft_putchar(int_control->padding);
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
		ft_putchar(int_control->padding);
}

static void	print_conversion(t_printf *print_control, t_handle_int *int_control)
{
	handle_minimum_width(print_control, int_control);
	if (int_control->print_as_padding)
		return (handle_right_padding(print_control, int_control));
	ft_putnbr_i(int_control->print_me);
	handle_right_padding(print_control, int_control);
	(print_control->chars_printed) += int_control->char_count;
}

bool		handled_int(t_printf *print_control)
{
	t_handle_int int_control;

	if (print_control->conversion != 'd' && print_control->conversion != 'i')
		return (false);
	initialize_int_control(print_control, &int_control);
	parse_flags(print_control, &int_control);
	print_conversion(print_control, &int_control);
	return (true);
}

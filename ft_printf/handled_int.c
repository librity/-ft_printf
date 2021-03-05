/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/05 23:55:36 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_left_padding(t_printf *print_control,
								t_handle_int *int_control)
{
	unsigned int left_padding;

	if (int_control->has_minimum_width == false ||
		int_control->minimum_width < int_control->char_count)
		return ;
	left_padding = int_control->minimum_width - int_control->char_count;
	if (int_control->print_as_padding)
		left_padding++;
	(print_control->chars_printed) += left_padding;
	while (left_padding--)
		ft_putchar(int_control->padding);
}

static void	handle_right_padding(t_printf *print_control,
									t_handle_int *int_control)
{
	unsigned int right_padding;

	if (int_control->has_right_padding == false)
		return ;
	right_padding = int_control->right_padding;
	(print_control->chars_printed) += right_padding;
	while (right_padding--)
		ft_putchar(int_control->padding);
}

static void	print_conversion(t_printf *print_control, t_handle_int *int_control)
{
	handle_left_padding(print_control, int_control);
	if (int_control->print_as_padding)
		return (handle_right_padding(print_control, int_control));
	ft_putnbr_i(int_control->print_me);
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

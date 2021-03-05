/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/05 22:49:02 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	pad_left(t_printf *print_control, t_handle_int *int_control)
{
	unsigned int left_padding;

	left_padding = int_control->minimum_width - int_control->char_count;
	if (int_control->has_precision)
		if (int_control->precision == 0 && int_control->print_me == 0)
			left_padding++;
	(print_control->chars_printed) += left_padding;
	while(left_padding--)
		ft_putchar(int_control->padding);
}

static void	pad_right(t_printf *print_control, t_handle_int *int_control)
{
	unsigned int right_padding;

	right_padding = int_control->right_padding;
	(print_control->chars_printed) += right_padding;
	while(right_padding--)
		ft_putchar(int_control->padding);
}

static void	print_conversion(t_printf *print_control, t_handle_int *int_control)
{
	if (int_control->has_minimum_width)
		if (int_control->minimum_width >= int_control->char_count)
			pad_left(print_control, int_control);
	if (int_control->has_precision)
		if (int_control->precision == 0 && int_control->print_me == 0)
		{
			if (int_control->has_right_padding)
				pad_right(print_control, int_control);
			return;
		}
	ft_putnbr_i(int_control->print_me);
	(print_control->chars_printed) += int_control->char_count;
}

static void	parse_flags(t_printf *print_control, t_handle_int *int_control)
{
	if (print_control->conversion_position == 0)
	{
		(print_control->format)++;
		return ;
	}
	if (ft_isdigit(*(int_control->flags)))
	{
		int_control->has_minimum_width = true;
		int_control->minimum_width = ft_atoui(int_control->flags);
		int_control->flags = ft_skip_digits(int_control->flags);
	}
	if (*int_control->flags == '-')
	{
		int_control->flags++;
		int_control->has_right_padding = true;
		int_control->right_padding = ft_atoui(int_control->flags);
		int_control->flags = ft_skip_digits(int_control->flags);
	}
	if (*int_control->flags == '.')
	{
		int_control->flags++;
		int_control->has_precision = true;
		int_control->precision = ft_atoui(int_control->flags);
		int_control->flags = ft_skip_digits(int_control->flags);
	}
	(print_control->format) += (print_control->conversion_position) + 1;
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

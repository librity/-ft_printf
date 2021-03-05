/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/05 19:58:39 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_padding(t_printf *print_control, t_handle_int *int_control)
{
	unsigned int total_padding;

	total_padding = int_control->minimum_width - int_control->char_count;
	if (int_control->has_precision)
		if (int_control->precision == 0 && int_control->print_me == 0)
			total_padding++;
	(print_control->chars_printed) += total_padding;
	while(total_padding--)
		ft_putchar(' ');
}

static void	print_conversion(t_printf *print_control, t_handle_int *int_control)
{
	if (int_control->has_minimum_width)
		if (int_control->minimum_width >= int_control->char_count)
			handle_padding(print_control, int_control);
	if (int_control->has_precision && !(int_control->has_left_adjustment))
		if (int_control->precision == 0 && int_control->print_me == 0)
			return;
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
		int_control->has_left_adjustment = true;
		int_control->left_adjustment = ft_atoui(int_control->flags);
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

static void	initialize_control(t_printf *print_control,
								t_handle_int *int_control)
{
	int_control->print_me = va_arg(print_control->elements, int);
	int_control->flags = (char *)(print_control->format);
	int_control->char_count = ft_count_chars_i(int_control->print_me);
	int_control->digit_count = ft_count_digits_i(int_control->print_me);
	int_control->has_minimum_width = false;
	int_control->minimum_width = 0;
	int_control->has_precision = false;
	int_control->precision = 0;
	int_control->has_left_adjustment = false;
	int_control->left_adjustment = 0;
}

bool		handled_int(t_printf *print_control)
{
	t_handle_int int_control;

	if (print_control->conversion != 'd' && print_control->conversion != 'i')
		return (false);
	initialize_control(print_control, &int_control);
	parse_flags(print_control, &int_control);
	print_conversion(print_control, &int_control);
	return (true);
}

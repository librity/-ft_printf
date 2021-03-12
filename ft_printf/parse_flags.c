/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/12 02:36:06 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	parse_precision(t_handle_int *int_control)
{
	int_control->flags++;
	int_control->precision = ft_atoi(int_control->flags);
	if (int_control->precision < 0)
	{
		int_control->precision = 0;
		return;
	}
	int_control->has_precision = true;
	int_control->flags = ft_skip_digits(int_control->flags);
	if (int_control->precision == 0 && int_control->print_me == 0)
		int_control->print_as_padding = true;
}

static void	parse_right_padding(t_handle_int *int_control)
{
	int_control->flags++;
	int_control->has_right_padding = true;
	int_control->right_padding = ft_atoi(int_control->flags);
	if (int_control->right_padding < 0)
		int_control->right_padding = -1 * int_control->right_padding;
	int_control->flags = ft_skip_digits(int_control->flags);
}

static void	parse_width(t_handle_int *int_control)
{
	if (*(int_control->flags) == '0' && ft_isdigit(*(int_control->flags + 1)))
	{
		int_control->is_left_padded_with_zero = true;
		int_control->flags++;
		int_control->precision = ft_atoi(int_control->flags);
		if (int_control->precision < 0)
			int_control->precision = 0;
		int_control->flags = ft_skip_digits(int_control->flags);
	}
	int_control->has_minimum_width = true;
	int_control->minimum_width = ft_atoui(int_control->flags);
	int_control->flags = ft_skip_digits(int_control->flags);
}

static void	fetch_print_me(t_printf *print_control, t_handle_int *int_control)
{
	int_control->print_me = va_arg(print_control->elements, int);
	int_control->char_count = ft_count_chars_i(int_control->print_me);
	int_control->digit_count = ft_count_digits_i(int_control->print_me);
}

void		parse_flags(t_printf *print_control, t_handle_int *int_control)
{
	if (print_control->conversion_position == 0)
	{
		(print_control->format)++;
		return (fetch_print_me(print_control, int_control));
	}
	parse_wildcars(print_control, int_control);
	fetch_print_me(print_control, int_control);
	if (ft_isdigit(*(int_control->flags)))
		parse_width(int_control);
	if (*int_control->flags == '-')
		parse_right_padding(int_control);
	if (*int_control->flags == '.')
		parse_precision(int_control);
	(print_control->format) += (print_control->conversion_position) + 1;
}

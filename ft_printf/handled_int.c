/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/05 16:48:28 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_padding(t_printf *print_control, t_handle_int *int_control)
{
	unsigned int total_padding;

	total_padding = int_control->minimum_width - int_control->char_count;
	(print_control->chars_printed) += total_padding;
	while(total_padding--)
		ft_putchar(' ');
}

static void	print_conversion(t_printf *print_control, t_handle_int *int_control)
{
	if (int_control->minimum_width != 0)
		if (int_control->minimum_width >= int_control->char_count)
			handle_padding(print_control, int_control);
	ft_putnbr_i(int_control->print_me);
	(print_control->chars_printed) += int_control->char_count;
	(print_control->format) += (print_control->conversion_position) + 1;
}

static void	parse_flags(t_printf *print_control, t_handle_int *int_control)
{
	if (print_control->conversion_position == 0)
		return ;
	int_control->minimum_width = ft_atoi(print_control->format);
}

static void	initialize_control(t_printf *print_control, t_handle_int *int_control)
{
	int_control->minimum_width = 0;
	int_control->print_me = va_arg(print_control->elements, int);
	int_control->char_count = ft_count_chars_i(int_control->print_me);
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

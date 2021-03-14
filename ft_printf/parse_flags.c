/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/14 09:45:24 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	parse_precision(t_handle_int *int_control)
{
	if (*(int_control->flags) != '.')
		return ;
	int_control->flags++;
	int_control->precision = ft_atoi(int_control->flags);
	if (int_control->precision < 0)
	{
		int_control->precision = 0;
		return ;
	}
	int_control->has_precision = true;
	int_control->flags = ft_skip_number(int_control->flags);
}

static void	parse_width(t_handle_int *int_control)
{
	if (unless(ft_is_decimal_char(*(int_control->flags))))
		return ;
	int_control->has_minimum_width = true;
	int_control->minimum_width = ft_atoui(int_control->flags);
	int_control->flags = ft_skip_number(int_control->flags);
}

static void	parse_modifiers(t_handle_int *int_control)
{
	if (*(int_control->flags) == '0')
	{
		int_control->is_left_padded_with_zeros = true;
		int_control->left_padder = '0';
		int_control->flags++;
	}
	if (*(int_control->flags) == '-')
	{
		int_control->is_left_justified = true;
		int_control->flags++;
	}
}

void		parse_flags(t_printf *print_control, t_handle_int *int_control)
{
	if (print_control->conversion_position == 0)
	{
		(print_control->format)++;
		return ;
	}
	parse_wildcars(print_control, int_control);
	parse_modifiers(int_control);
	parse_width(int_control);
	parse_precision(int_control);
	if (int_control->is_left_justified || int_control->has_precision)
	{
		int_control->is_left_padded_with_zeros = false;
		int_control->left_padder = ' ';
	}
	(print_control->format) += (print_control->conversion_position) + 1;
}

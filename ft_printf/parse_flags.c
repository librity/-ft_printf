/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/14 10:28:25 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	parse_precision(t_parse_flags *flag_control)
{
	if (*(flag_control->flags) != '.')
		return ;
	flag_control->flags++;
	flag_control->precision = ft_atoi(flag_control->flags);
	if (flag_control->precision < 0)
	{
		flag_control->precision = 0;
		return ;
	}
	flag_control->has_precision = true;
	flag_control->flags = ft_skip_number(flag_control->flags);
}

static void	parse_width(t_parse_flags *flag_control)
{
	if (unless(ft_is_decimal_char(*(flag_control->flags))))
		return ;
	flag_control->has_minimum_width = true;
	flag_control->minimum_width = ft_atoui(flag_control->flags);
	flag_control->flags = ft_skip_number(flag_control->flags);
}

static void	parse_modifiers(t_parse_flags *flag_control)
{
	if (*(flag_control->flags) == '0')
	{
		flag_control->is_left_padded_with_zeros = true;
		flag_control->left_padder = '0';
		flag_control->flags++;
	}
	if (*(flag_control->flags) == '-')
	{
		flag_control->is_left_justified = true;
		flag_control->flags++;
	}
}

void		parse_flags(t_printf *print_control,
						t_parse_flags *flag_control)
{
	if (print_control->conversion_position == 0)
	{
		(print_control->format)++;
		return ;
	}
	parse_wildcars(print_control, flag_control);
	parse_modifiers(flag_control);
	parse_width(flag_control);
	parse_precision(flag_control);
	if (flag_control->is_left_justified || flag_control->has_precision)
	{
		flag_control->is_left_padded_with_zeros = false;
		flag_control->left_padder = ' ';
	}
	(print_control->format) += (print_control->conversion_position) + 1;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_double_percent.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/08 03:49:47 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static bool	not_double_percent(const char *format)
{
	if (*(format) == '%')
		if (*(format + 1) == '%')
			return (false);
	return (true);
}

bool		handled_double_percent(t_printf *print_control)
{
	if (not_double_percent(print_control->format))
		return (false);
	ft_putchar(*(print_control->format));
	(print_control->format) += 2;
	(print_control->chars_printed)++;
	return (true);
}

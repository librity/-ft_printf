/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_double_percent.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/14 11:20:56 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool		handled_double_percent(t_printf *print_control)
{
	if (print_control->conversion != '%')
		return (false);
	ft_putchar('%');
	(print_control->chars_printed)++;
	(print_control->format) += (print_control->conversion_position) + 1;
	return (true);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_double_percentage.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/05 04:03:39 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool	handled_double_percentage(t_printf *print_control)
{
	if (!(*(print_control->format) == '%' &&
		(*(print_control->format) + 1) == '%'))
		return (false);
	ft_putchar(*(print_control->format));
	(print_control->format) += 2;
	(print_control->chars_printed)++;
	return (true);
}

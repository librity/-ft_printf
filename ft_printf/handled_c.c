/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:00:32 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/05 03:36:11 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool	handled_c(t_printf *print_control)
{
	char print_me;

	if ((print_control->format)[print_control->conversion_position] != 'c')
		return (false);
	print_me = (unsigned char)va_arg(print_control->elements, int);
	ft_putchar(print_me);
	(print_control->chars_printed)++;
	(print_control->format) += (print_control->conversion_position) + 1;
	return (true);
}

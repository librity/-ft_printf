/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:59 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/08 02:39:18 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool	handled_s(t_printf *print_control)
{
	char *print_me;

	if (print_control->conversion != 's')
		return (false);
	print_me = va_arg(print_control->elements, char *);
	if (print_me == NULL)
	{
		ft_putstr("(null)");
		(print_control->chars_printed) += 6;
		(print_control->format) += (print_control->conversion_position) + 1;
		return (true);
	}
	ft_putstr(print_me);
	(print_control->chars_printed) += ft_strlen(print_me);
	(print_control->format) += (print_control->conversion_position) + 1;
	return (true);
}

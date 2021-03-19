/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_no_conversion.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:18:48 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/19 02:58:52 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

bool	handled_no_conversion(t_printf *print_control)
{
	if (*(print_control->format) == '%')
		return (false);
	ft_putchar(*(print_control->format));
	(print_control->format)++;
	(print_control->chars_printed)++;
	return (true);
}

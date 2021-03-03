/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/03 04:12:33 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool	handled_int(const char **format,
					int *chars_printed,
					char current_conversion,
					va_list elements)
{
	int print_me;

	if (current_conversion != 'd' && current_conversion != 'i')
		return (false);
	print_me = va_arg(elements, int);
	ft_putnbr(print_me);
	if (print_me < 0)
		(*chars_printed)++;
	*chars_printed += ft_count_digits(print_me);
	(*format)++;
	return (true);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:00:32 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/03 04:13:29 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool	handled_char(const char **format,
					int *chars_printed,
					char current_conversion,
					va_list elements)
{
	char print_me;

	if (current_conversion != 'c')
		return (false);
	print_me = (unsigned char)va_arg(elements, int);
	ft_putchar(print_me);
	(*format)++;
	(*chars_printed)++;
	return (true);
}

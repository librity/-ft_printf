/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:00:32 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/03 06:27:10 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool	handled_char(const char **format,
					int *chars_printed,
					int conversion_posistion,
					va_list elements)
{
	char print_me;

	if (*format[conversion_posistion] != 'c')
		return (false);
	print_me = (unsigned char)va_arg(elements, int);
	ft_putchar(print_me);
	(*chars_printed)++;
	(*format) += conversion_posistion + 1;
	return (true);
}

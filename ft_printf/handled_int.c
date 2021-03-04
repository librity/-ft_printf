/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/04 19:48:14 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool	handled_int(const char **format,
					int *chars_printed,
					int conversion_posistion,
					va_list elements)
{
	int print_me;

	if ((*format)[conversion_posistion] != 'd' &&
		(*format)[conversion_posistion] != 'i')
		return (false);
	print_me = va_arg(elements, int);
	ft_putnbr(print_me);
	if (print_me < 0)
		(*chars_printed)++;
	*chars_printed += ft_count_digits(print_me);
	(*format) += conversion_posistion + 1;
	return (true);
}

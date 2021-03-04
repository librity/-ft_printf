/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_uint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/04 19:48:40 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool	handled_uint(const char **format,
					int *chars_printed,
					int conversion_posistion,
					va_list elements)
{
	unsigned long print_me;

	if ((*format)[conversion_posistion] != 'u')
		return (false);
	print_me = (unsigned long)va_arg(elements, void *);
	ft_putnbr_base(print_me, "0123456789");
	*chars_printed += ft_count_udigits(print_me);
	(*format) += conversion_posistion + 1;
	return (true);
}

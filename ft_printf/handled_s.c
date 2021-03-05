/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:59 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/05 00:08:06 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool	handled_s(const char **format,
						int *chars_printed,
						int conversion_posistion,
						va_list elements)
{
	char *print_me;

	if ((*format)[conversion_posistion] != 's')
		return (false);
	print_me = va_arg(elements, char *);
	if (print_me == NULL)
	{
		ft_putstr("(null)");
		*chars_printed += 6;
		(*format) += conversion_posistion + 1;
		return (true);
	}
	ft_putstr(print_me);
	*chars_printed += ft_strlen(print_me);
	(*format) += conversion_posistion + 1;
	return (true);
}

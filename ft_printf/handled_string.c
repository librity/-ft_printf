/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handled_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:59 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/03 04:12:59 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool	handled_string(const char **format,
					int *chars_printed,
					char current_conversion,
					va_list elements)
{
	char *print_me;

	if (current_conversion != 's')
		return (false);
	print_me = va_arg(elements, char *);
	ft_putstr(print_me);
	(*format)++;
	*chars_printed += ft_strlen(print_me);
	return (true);
}

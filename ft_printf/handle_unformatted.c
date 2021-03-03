/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_unformatted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:18:48 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/03 03:18:48 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool	handle_unformatted(const char **format, int *chars_printed)
{
	if (**format == '%')
		return (false);
	ft_putchar(**format);
	(*format)++;
	(*chars_printed)++;
	return (true);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_unformatted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 02:58:13 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/02/26 03:15:12 by lpaulo-m         ###   ########.fr       */
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

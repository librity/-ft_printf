/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_double_percentage.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 02:58:23 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/02/26 03:14:59 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool	handle_double_percentage(const char **format, int *chars_printed)
{
	if (!(**format == '%' && *(*(format) + 1) == '%'))
		return (false);
	ft_putchar(**format);
	*format += 2;
	(*chars_printed)++;
	return (true);
}

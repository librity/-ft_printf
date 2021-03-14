/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/14 14:19:02 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		printf_s(t_printf *print_control,
						t_handle_s *control)
{
	if (control->is_null)
	{
		ft_putstr("(null)");
		(print_control->chars_printed) += 6;
		return ;
	}
	ft_putstr(control->print_me);
	(print_control->chars_printed) += control->length;
}

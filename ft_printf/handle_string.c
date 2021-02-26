/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 03:00:06 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/02/26 03:15:06 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle_string(int *chars_printed, char *print_me)
{
	ft_putstr(print_me);
	*chars_printed += ft_strlen(print_me);
}

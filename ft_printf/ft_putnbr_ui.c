/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ui.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:17:29 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/04 23:47:07 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Writes ascii representation of number to file descriptor fd.
*/

void	ft_putnbr_ui(int number)
{
	ft_putnbr_base_ui(number, DECIMAL_BASE);
}

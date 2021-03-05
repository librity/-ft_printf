/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ul.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:17:29 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/04 23:26:17 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Writes ascii representation of number to file descriptor fd.
*/

void	ft_putnbr_ul(int number)
{
	ft_putnbr_base_ul(number, DECIMAL_BASE);
}

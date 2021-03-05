/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:17:29 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/04 23:25:17 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Writes ascii representation of number to file descriptor fd.
*/

void	ft_putnbr(int number)
{
	ft_putnbr_base(number, DECIMAL_BASE);
}

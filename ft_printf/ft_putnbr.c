/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:17:29 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/03 03:17:29 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Writes ascii representation of number to file descriptor fd.
*/

void	ft_putnbr(int n)
{
	long int number;

	number = n;
	if (number < 0)
	{
		ft_putchar('-');
		number *= -1;
	}
	if (number >= 10)
		ft_putnbr(number / 10);
	ft_putchar('0' + (number % 10));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 02:24:19 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/02/26 03:12:57 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_count_digits(int n)
{
	size_t digit_count;

	digit_count = 1;
	while (n /= 10)
		digit_count++;
	return (digit_count);
}

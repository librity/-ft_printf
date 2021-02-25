/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadic_deviation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m@student.42sp.org.br <lpaulo-m>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:49:51 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/02/25 17:54:19 by lpaulo-m@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// clang variadic_deviation.c -lm && ./a.out

#include <stdio.h>
#include <stdarg.h>
#include <math.h>

double deviation(int first, ...);

int main(void)
{
	printf("Deviation is: %f\n", deviation(2, 3, 4, -1));
	printf("Deviation is: %f\n", deviation(5, 7, 9, 11, -1));
	printf("Deviation is: %f\n", deviation(-1));
}

double deviation(int first, ...)
{
	int count = 0, i = first;
	double mean = 0.0, sum = 0.0;
	va_list marker;
	va_list copy;

	va_start(marker, first);
	va_copy(copy, marker);
	while (i != -1)
	{
		sum += i;
		count++;
		i = va_arg(marker, int);
	}
	va_end(marker);
	mean = sum ? (sum / count) : 0.0;

	i = first;
	sum = 0.0;
	while (i != -1)
	{
		sum += (i - mean) * (i - mean);
		i = va_arg(copy, int);
	}
	va_end(copy);
	return count ? sqrt(sum / count) : 0.0;
}

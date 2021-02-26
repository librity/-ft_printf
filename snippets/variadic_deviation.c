/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadic_deviation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:49:51 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/02/26 03:13:35 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// clang variadic_deviation.c -lm && ./a.out

#include <stdio.h>
#include <stdarg.h>
#include <math.h>

double deviation(int first, ...);
double double_deviation(double first, ...);

int main(void)
{
	printf("Deviation is: %f\n", deviation(-1));
	printf("Deviation is: %f\n", deviation(2, -1));
	printf("Deviation is: %f\n", deviation(2, 2, -1));

	printf("Deviation is: %f\n", deviation(2, 3, 4, -1));
	printf("Deviation is: %f\n", deviation(5, 7, 9, 11, -1));
	printf("Deviation is: %f\n", deviation(5, 6, 7, 8, 9, -1));

	printf("double Deviation is: %e\n", double_deviation(-1.0));
	printf("double Deviation is: %e\n", double_deviation(2.0, -1.0));
	printf("double Deviation is: %e\n", double_deviation(2.0, 2.0, -1.0));

	printf("double Deviation is: %e\n", double_deviation(2.0, 3.0, 4.0, -1.0));
	printf("double Deviation is: %e\n", double_deviation(5.0, 7.0, 9.0, 11.0, -1.0));
	printf("double Deviation is: %e\n", double_deviation(5.0, 6.0, 7.0, 8.0, 9.0, -1.0));

	// Should segfault
	// printf("double Deviation is: %e\n", double_deviation(5.0, 6.0, 7.0, 8.0, 9.0));
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

double double_deviation(double first, ...)
{
	int count = 0;
	double i = first;
	double mean = 0.0, sum = 0.0;
	va_list marker;
	va_list copy;

	va_start(marker, first);
	va_copy(copy, marker);
	while (i != -1.0)
	{
		sum += i;
		count++;
		i = va_arg(marker, double);
	}
	va_end(marker);
	mean = sum ? (sum / count) : 0.0;

	i = first;
	sum = 0.0;
	while (i != -1)
	{
		sum += (i - mean) * (i - mean);
		i = va_arg(copy, double);
	}
	va_end(copy);
	return count ? sqrt(sum / count) : 0.0;
}

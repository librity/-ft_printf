/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadic_average.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 03:11:35 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/02/26 03:13:34 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

double int_average(unsigned int num, ...)
{

	va_list valist;
	double sum = 0.0;
	int i;

	va_start(valist, num);

	for (i = 0; i < num; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return sum / num;
}

double double_average(unsigned int n, ...)
{
	va_list pargs;

	va_start(pargs, n);

	double sum = 0;
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		double x = va_arg(pargs, double);
		sum += x;
	}
	va_end(pargs);
	return (n > 0) ? (sum / n) : 0.00;
}

int main()
{
	printf("Average of 2, 3, 4, 5 = %f\n", int_average(4, 2, 3, 4, 5));
	printf("Average of 5, 10, 15 = %f\n", int_average(3, 5, 10, 15));

	printf("Average of 50.3, 49.7 = %e\n", double_average(2, 50.3, 49.7));
	printf("Average of 12.45, 2.87, 0.256, 90.1532, 6320.12 = %e\n",
		   double_average(5, 12.45, 2.87, 0.256, 90.1532, 6320.12));
}

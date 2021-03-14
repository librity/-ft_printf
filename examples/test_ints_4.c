/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example_12.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:16:11 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/14 07:58:32 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	int a = -4;
	int b = 0;
	char c = 'a';
	int d = 2147483647;
	int e = -2147483648;
	// int f = 42;
	// int g = 25;
	// int h = 4200;
	int i = 8;
	int j = -12;
	int k = 123456789;
	int l = 0;
	int m = -12345678;
	char *n = "abcdefghijklmnop";
	// char *o = "-a";
	// char *p = "-12";
	// char *q = "0";
	// char *r = "%%";
	// char *s = "-2147483648";
	// char *t = "0x12345678";
	// char *u = "-0";

	int counter = 70;
	a = -2;
	while (a < 5) //T70-177
	{
		b = -2;
		while (b < 5)
		{
			printf("--------------\n");
			printf("a = %d;\n", a);
			printf("b = %d;\n", b);
			printf("--------------");

			printf("\n------- %d -------\n", counter++);
			printf(" --- Return : %d\n", printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d));
			printf(" --- Return : %d\n", ft_printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d));

			printf("\n------- %d -------\n", counter++);
			printf(" --- Return : %d\n", printf("%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d));
			printf(" --- Return : %d\n", ft_printf("%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d));

			printf("\n------- %d -------\n", counter++);
			printf(" --- Return : %d\n", printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d));
			printf(" --- Return : %d\n", ft_printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d));

			b++;
		}
		a++;
	}

	a = 19;
	b = 14;
	printf("\n------- %d -------\n", counter++);
	printf(" --- Return : %d\n", printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d", a, b, -42, a, b, 42, -a, -b, -42, -a, -b, 42, -a, b, -42, -a, b, 42, a, -b, -42, a, -b, 42));	   //217
	printf(" --- Return : %d\n", ft_printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d", a, b, -42, a, b, 42, -a, -b, -42, -a, -b, 42, -a, b, -42, -a, b, 42, a, -b, -42, a, -b, 42)); //217

	printf("\n------- %d -------\n", counter++);
	printf(" --- Return : %d\n", printf("%12.12i, %12.12d", -42, 42));	  //218
	printf(" --- Return : %d\n", ft_printf("%12.12i, %12.12d", -42, 42)); //218

	// a = 2;
	// b = 0;
	// printf(" --- Return : %d\n", printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d));
	// printf(" --- Return : %d\n", ft_printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d));
}

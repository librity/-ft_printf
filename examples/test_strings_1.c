/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strings_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   Byprint
PRINT
PRINT
PRINT
PRINT
PRINT
PRINT
PRINT
PRINT
PRINT
PRINT
PRINT
PRINT
PRINT
PRINT
PRINT
PRINT
PRINT
PRINT
PRINT
PRINT
PRINT
PRINT
PRINT
PRINT
PRINT
PRINT
PRINT
PRINT: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:16:11 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/14 13:19:24 by lpaulo-m         ###   ########.fr       */
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
	char *o = "-a";
	char *p = "-12";
	char *q = "0";
	char *r = "%%";
	char *s = "-2147483648";
	char *t = "0x12345678";
	char *u = "-0";

	int counter = 219;

	printf("\n------- %d -------\n", counter++);
	printf(" --- Return : %d\n", printf("%1s, %1s, %1s, %1s, %1s", n, o, p, q, r));
	printf(" --- Return : %d\n", ft_printf("%1s, %1s, %1s, %1s, %1s", n, o, p, q, r));

	printf("\n------- %d -------\n", counter++);
	printf(" --- Return : %d\n", printf("%2s, %2s, %2s, %2s, %2s", n, o, p, q, r));
	printf(" --- Return : %d\n", ft_printf("%2s, %2s, %2s, %2s, %2s", n, o, p, q, r));

	printf("\n------- %d -------\n", counter++);
	printf(" --- Return : %d\n", printf("%3s, %3s, %3s, %3s, %3s", n, o, p, q, r));
	printf(" --- Return : %d\n", ft_printf("%3s, %3s, %3s, %3s, %3s", n, o, p, q, r));

	printf("\n------- %d -------\n", counter++);
	printf(" --- Return : %d\n", printf("%4s, %4s, %4s, %4s, %4s", n, o, p, q, r));
	printf(" --- Return : %d\n", ft_printf("%4s, %4s, %4s, %4s, %4s", n, o, p, q, r));

	printf("\n------- %d -------\n", counter++);
	printf(" --- Return : %d\n", printf("%15s, %15s, %15s, %15s, %15s", n, o, p, q, r));
	printf(" --- Return : %d\n", ft_printf("%15s, %15s, %15s, %15s, %15s", n, o, p, q, r));

	printf("\n------- %d -------\n", counter++);
	printf(" --- Return : %d\n", printf("%16s, %16s, %16s, %16s, %16s", n, o, p, q, r));
	printf(" --- Return : %d\n", ft_printf("%16s, %16s, %16s, %16s, %16s", n, o, p, q, r));

	printf("\n------- %d -------\n", counter++);
	printf(" --- Return : %d\n", printf("%17s, %17s, %17s, %17s, %17s", n, o, p, q, r));
	printf(" --- Return : %d\n", ft_printf("%17s, %17s, %17s, %17s, %17s", n, o, p, q, r));

	printf("\n------- %d -------\n", counter++);
	printf(" --- Return : %d\n", printf("%.s, %.s, %.s, %.s, %.s", n, o, p, q, r));
	printf(" --- Return : %d\n", ft_printf("%.s, %.s, %.s, %.s, %.s", n, o, p, q, r));

	printf("\n------- %d -------\n", counter++);
	printf(" --- Return : %d\n", printf("%1.s, %1.s, %1.s, %1.s, %1.s", n, o, p, q, r));
	printf(" --- Return : %d\n", ft_printf("%1.s, %1.s, %1.s, %1.s, %1.s", n, o, p, q, r));

	a = -4;
	while (a < 5)
	{
		printf("a = %d;\n", a);
		printf("--------------");

		printf("\n------- %d -------\n", counter++);
		printf(" --- Return : %d\n", printf("%*s, %*s, %*s, %*s, %*s, %*s, %*s, %*s", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u));
		printf(" --- Return : %d\n", ft_printf("%*s, %*s, %*s, %*s, %*s, %*s, %*s, %*s", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u));

		printf("\n------- %d -------\n", counter++);
		printf(" --- Return : %d\n", printf("%-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u));
		printf(" --- Return : %d\n", ft_printf("%-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u));

		printf("\n------- %d -------\n", counter++);
		printf(" --- Return : %d\n", printf("%.*s, %.*s, %.*s, %.*s, %.*s, %.*s, %.*s, %.*s", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u));
		printf(" --- Return : %d\n", ft_printf("%.*s, %.*s, %.*s, %.*s, %.*s, %.*s, %.*s, %.*s", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u));

		a++;
	}

	a = -2;
	while (a < 5)
	{
		b = -2;
		while (b < 5)
		{
			printf("a = %d;\n", a);
			printf("b = %d;\n", b);
			printf("--------------");

			printf("\n------- %d -------\n", counter++);
			printf(" --- Return : %d\n", printf("%*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s", a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u));
			printf(" --- Return : %d\n", ft_printf("%*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s", a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u));

			printf("\n------- %d -------\n", counter++);
			printf(" --- Return : %d\n", printf("%-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s", a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u));
			printf(" --- Return : %d\n", ft_printf("%-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s", a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u));

			b++;
		}
		a++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:16:11 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/04 18:31:54 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	// int a = -4;
	// int b = 0;
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

	printf(" --- Return : %d\n",    printf("Simple input test"));
	printf(" --- Return : %d\n", ft_printf("Simple input test"));
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X", i, j, k, l, m, n, c, c, j, j, j));
	printf(" --- Return : %d\n", ft_printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X", i, j, k, l, m, n, c, c, j, j, j));
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d", i, j, k, l, m, c, e, d));
	printf(" --- Return : %d\n", ft_printf("%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d", i, j, k, l, m, c, e, d));
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%1i, %1d, %1d, %1d, %1d, %1d, %1d, %1d", i, j, k, l, m, c, e, d));
	printf(" --- Return : %d\n", ft_printf("%1i, %1d, %1d, %1d, %1d, %1d, %1d, %1d", i, j, k, l, m, c, e, d));
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%2i, %2d, %2d, %2d, %2d, %2d, %2d, %2d", i, j, k, l, m, c, e, d));
	printf(" --- Return : %d\n", ft_printf("%2i, %2d, %2d, %2d, %2d, %2d, %2d, %2d", i, j, k, l, m, c, e, d));
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%3i, %3d, %3d, %3d, %3d, %3d, %3d, %3d", i, j, k, l, m, c, e, d));
	printf(" --- Return : %d\n", ft_printf("%3i, %3d, %3d, %3d, %3d, %3d, %3d, %3d", i, j, k, l, m, c, e, d));
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%4i, %4d, %4d, %4d, %4d, %4d, %4d, %4d", i, j, k, l, m, c, e, d));
	printf(" --- Return : %d\n", ft_printf("%4i, %4d, %4d, %4d, %4d, %4d, %4d, %4d", i, j, k, l, m, c, e, d));
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%5i, %5d, %5d, %5d, %5d, %5d, %5d, %5d", i, j, k, l, m, c, e, d));
	printf(" --- Return : %d\n", ft_printf("%5i, %5d, %5d, %5d, %5d, %5d, %5d, %5d", i, j, k, l, m, c, e, d));
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%6i, %6d, %6d, %6d, %6d, %6d, %6d, %6d", i, j, k, l, m, c, e, d));
	printf(" --- Return : %d\n", ft_printf("%6i, %6d, %6d, %6d, %6d, %6d, %6d, %6d", i, j, k, l, m, c, e, d));
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%7i, %7d, %7d, %7d, %7d, %7d, %7d, %7d", i, j, k, l, m, c, e, d));
	printf(" --- Return : %d\n", ft_printf("%7i, %7d, %7d, %7d, %7d, %7d, %7d, %7d", i, j, k, l, m, c, e, d));
	printf("-------------------------\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example_10.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:16:11 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/05 18:31:10 by lpaulo-m         ###   ########.fr       */
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

	printf(" --- Return : %d\n",    printf("%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d", i, j, k, l, m, c, e, d));	   //CUSTOM
	printf(" --- Return : %d\n", ft_printf("%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d", i, j, k, l, m, c, e, d)); //CUSTOM
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%0.i, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d", i, j, k, l, m, c, e, d));	   //T12
	printf(" --- Return : %d\n", ft_printf("%0.i, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d", i, j, k, l, m, c, e, d)); //T12
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%.0i, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d", i, j, k, l, m, c, e, d));	   //T13
	printf(" --- Return : %d\n", ft_printf("%.0i, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d", i, j, k, l, m, c, e, d)); //T13
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%0.0i, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d", i, j, k, l, m, c, e, d));	   //T14
	printf(" --- Return : %d\n", ft_printf("%0.0i, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d", i, j, k, l, m, c, e, d)); //T14
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%11.i, %11.d, %11.d, %11.d, %11.d, %11.d, %11.d, %11.d", i, j, k, l, m, c, e, d));	   //CUSTOM
	printf(" --- Return : %d\n", ft_printf("%11.i, %11.d, %11.d, %11.d, %11.d, %11.d, %11.d, %11.d", i, j, k, l, m, c, e, d)); //CUSTOM
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%.11i, %.11d, %.11d, %.11d, %.11d, %.11d, %.11d, %.11d", i, j, k, l, m, c, e, d));	   //CUSTOM
	printf(" --- Return : %d\n", ft_printf("%.11i, %.11d, %.11d, %.11d, %.11d, %.11d, %.11d, %.11d", i, j, k, l, m, c, e, d)); //CUSTOM
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%11.11i, %11.11d, %11.11d, %11.11d, %11.11d, %11.11d, %11.11d, %11.11d", i, j, k, l, m, c, e, d));	   //CUSTOM
	printf(" --- Return : %d\n", ft_printf("%11.11i, %11.11d, %11.11d, %11.11d, %11.11d, %11.11d, %11.11d, %11.11d", i, j, k, l, m, c, e, d)); //CUSTOM
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%-0i, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d", i, j, k, l, m, c, e, d));	   //T15
	printf(" --- Return : %d\n", ft_printf("%-0i, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d", i, j, k, l, m, c, e, d)); //T15
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%0-i, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d", i, j, k, l, m, c, e, d));	   //T16
	printf(" --- Return : %d\n", ft_printf("%0-i, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d", i, j, k, l, m, c, e, d)); //T16
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%-.i, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d", i, j, k, l, m, c, e, d));	   //T17
	printf(" --- Return : %d\n", ft_printf("%-.i, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d", i, j, k, l, m, c, e, d)); //T17
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%-.0i, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d", i, j, k, l, m, c, e, d));	   //T18
	printf(" --- Return : %d\n", ft_printf("%-.0i, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d", i, j, k, l, m, c, e, d)); //T18
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%-i, %-d, %-d, %-d, %-d, %-d, %-d, %-d", i, j, k, l, m, c, e, d));	   //T19
	printf(" --- Return : %d\n", ft_printf("%-i, %-d, %-d, %-d, %-d, %-d, %-d, %-d", i, j, k, l, m, c, e, d)); //T19
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%.i, %.d, %.d, %.d, %.d, %.d, %.d, %.d", i, j, k, l, m, c, e, d));	   //T20
	printf(" --- Return : %d\n", ft_printf("%.i, %.d, %.d, %.d, %.d, %.d, %.d, %.d", i, j, k, l, m, c, e, d)); //T20
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%-0.0i, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d", i, j, k, l, m, c, e, d));	   //T21
	printf(" --- Return : %d\n", ft_printf("%-0.0i, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d", i, j, k, l, m, c, e, d)); //T21
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%00i, %00d, %00d, %00d, %00d, %00d, %00d, %00d", i, j, k, l, m, c, e, d));	   //T22
	printf(" --- Return : %d\n", ft_printf("%00i, %00d, %00d, %00d, %00d, %00d, %00d, %00d", i, j, k, l, m, c, e, d)); //T22
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%1.i, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d", i, j, k, l, m, c, e, d));	   //T23
	printf(" --- Return : %d\n", ft_printf("%1.i, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d", i, j, k, l, m, c, e, d)); //T23
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%.1i, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d", i, j, k, l, m, c, e, d));	   //T24
	printf(" --- Return : %d\n", ft_printf("%.1i, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d", i, j, k, l, m, c, e, d)); //T24
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%1.1i, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d", i, j, k, l, m, c, e, d));	   //T25
	printf(" --- Return : %d\n", ft_printf("%1.1i, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d", i, j, k, l, m, c, e, d)); //T25
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%-1i, %-1d, %-1d, %-1d, %-1d, %-1d, %-1d, %-1d", i, j, k, l, m, c, e, d));	   //T26
	printf(" --- Return : %d\n", ft_printf("%-1i, %-1d, %-1d, %-1d, %-1d, %-1d, %-1d, %-1d", i, j, k, l, m, c, e, d)); //T26
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%-01i, %-01d, %-01d, %-01d, %-01d, %-01d, %-01d, %-01d", i, j, k, l, m, c, e, d));	   //T27
	printf(" --- Return : %d\n", ft_printf("%-01i, %-01d, %-01d, %-01d, %-01d, %-01d, %-01d, %-01d", i, j, k, l, m, c, e, d)); //T27
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%-1.i, %-1.d, %-1.d, %-1.d, %-1.d, %-1.d, %-1d, %-1d", i, j, k, l, m, c, e, d));	 //T28
	printf(" --- Return : %d\n", ft_printf("%-1.i, %-1.d, %-1.d, %-1.d, %-1.d, %-1.d, %-1d, %-1d", i, j, k, l, m, c, e, d)); //T28
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%-.1i, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d", i, j, k, l, m, c, e, d));	   //T29
	printf(" --- Return : %d\n", ft_printf("%-.1i, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d", i, j, k, l, m, c, e, d)); //T29
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%-0.1i, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d", i, j, k, l, m, c, e, d));	   //T30
	printf(" --- Return : %d\n", ft_printf("%-0.1i, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d", i, j, k, l, m, c, e, d)); //T30
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%-1.0i, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d", i, j, k, l, m, c, e, d));	   //T31
	printf(" --- Return : %d\n", ft_printf("%-1.0i, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d", i, j, k, l, m, c, e, d)); //T31
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%-1.1i, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d", i, j, k, l, m, c, e, d));	   //T32
	printf(" --- Return : %d\n", ft_printf("%-1.1i, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d", i, j, k, l, m, c, e, d)); //T32
	printf("-------------------------\n");

	printf(" --- Return : %d\n",    printf("%1.0i, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d", i, j, k, l, m, c, e, d));	   //T33
	printf(" --- Return : %d\n", ft_printf("%1.0i, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d", i, j, k, l, m, c, e, d)); //T33
	printf("-------------------------\n");
}

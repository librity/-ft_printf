/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   guacamole_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:40:07 by mchardin          #+#    #+#             */
/*   Updated: 2021/03/18 23:08:18 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int a = -4;
	int b = 0;
	char c = 'a';
	int d = 2147483647;
	int e = -2147483648;
	int f = 42;
	int g = 25;
	int h = 4200;
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

	int counter = 487;

	printf("\n--------------\n");
	// printf(" --- Return : %d\n", printf("%p, %x, %p, %x, %p, %x, %p, %x", (void *)209590960, 209590960, (void *)207038912, 207038912, (void *)1, 1, NULL, 0));	  //T347
	printf("0xc7e1ab0, c7e1ab0, 0xc5729c0, c5729c0, 0x1, 1, 0x0, 0 --- Return : 54\n");
	printf(" --- Return : %d\n", ft_printf("%p, %x, %p, %x, %p, %x, %p, %x", (void *)209590960, 209590960, (void *)207038912, 207038912, (void *)1, 1, NULL, 0)); //T347

	printf("\n--------------\n");
	// printf(" --- Return : %d\n", printf("%*p, %*x, %*p, %*x, %*p, %*x, %*p, %*x", 8, (void *)209590960, 8, 209590960, 8, (void *)207038912, 8, 207038912, 8, (void *)1, 8, 1, 8, NULL, 8, 0));
	printf("0xc7e1ab0,  c7e1ab0, 0xc5729c0,  c5729c0,      0x1,        1,      0x0,        0 --- Return : 80\n");
	printf(" --- Return : %d\n", ft_printf("%*p, %*x, %*p, %*x, %*p, %*x, %*p, %*x", 8, (void *)209590960, 8, 209590960, 8, (void *)207038912, 8, 207038912, 8, (void *)1, 8, 1, 8, NULL, 8, 0));

	printf("\n--------------\n");
	// printf(" --- Return : %d\n", printf("%-*p, %-*x, %-*p, %-*x, %-*p, %-*x, %-*p, %-*x", 8, (void *)209590960, 8, 209590960, 8, (void *)207038912, 8, 207038912, 8, (void *)1, 8, 1, 8, NULL, 8, 0));
	printf("0xc7e1ab0, c7e1ab0 , 0xc5729c0, c5729c0 , 0x1     , 1       , 0x0     , 0        --- Return : 80\n");
	printf(" --- Return : %d\n", ft_printf("%-*p, %-*x, %-*p, %-*x, %-*p, %-*x, %-*p, %-*x", 8, (void *)209590960, 8, 209590960, 8, (void *)207038912, 8, 207038912, 8, (void *)1, 8, 1, 8, NULL, 8, 0));

	printf("\n--------------\n");
	// printf(" --- Return : %d\n", printf("%*p, %*x, %*p, %*x, %*p, %*x, %*p, %*x", 9, (void *)209590960, 9, 209590960, 9, (void *)207038912, 9, 207038912, 9, (void *)1, 9, 1, 9, NULL, 9, 0));
	printf("0xc7e1ab0,   c7e1ab0, 0xc5729c0,   c5729c0,       0x1,         1,       0x0,         0 --- Return : 86\n");
	printf(" --- Return : %d\n", ft_printf("%*p, %*x, %*p, %*x, %*p, %*x, %*p, %*x", 9, (void *)209590960, 9, 209590960, 9, (void *)207038912, 9, 207038912, 9, (void *)1, 9, 1, 9, NULL, 9, 0));

	printf("\n--------------\n");
	// printf(" --- Return : %d\n", printf("%-*p, %-*x, %-*p, %-*x, %-*p, %-*x, %-*p, %-*x", 9, (void *)209590960, 9, 209590960, 9, (void *)207038912, 9, 207038912, 9, (void *)1, 9, 1, 9, NULL, 9, 0));
	printf("0xc7e1ab0, c7e1ab0  , 0xc5729c0, c5729c0  , 0x1      , 1        , 0x0      , 0         --- Return : 86\n");
	printf(" --- Return : %d\n", ft_printf("%-*p, %-*x, %-*p, %-*x, %-*p, %-*x, %-*p, %-*x", 9, (void *)209590960, 9, 209590960, 9, (void *)207038912, 9, 207038912, 9, (void *)1, 9, 1, 9, NULL, 9, 0));

	printf("\n--------------\n");
	// printf(" --- Return : %d\n", printf("%*p, %*x, %*p, %*x, %*p, %*x, %*p, %*x", 10, (void *)209590960, 10, 209590960, 10, (void *)207038912, 10, 207038912, 10, (void *)1, 10, 1, 10, NULL, 10, 0));
	printf(" 0xc7e1ab0,    c7e1ab0,  0xc5729c0,    c5729c0,        0x1,          1,        0x0,          0 --- Return : 94\n");
	printf(" --- Return : %d\n", ft_printf("%*p, %*x, %*p, %*x, %*p, %*x, %*p, %*x", 10, (void *)209590960, 10, 209590960, 10, (void *)207038912, 10, 207038912, 10, (void *)1, 10, 1, 10, NULL, 10, 0));

	printf("\n--------------\n");
	// printf(" --- Return : %d\n", printf("%-*p, %-*x, %-*p, %-*x, %-*p, %-*x, %-*p, %-*x", 10, (void *)209590960, 10, 209590960, 10, (void *)207038912, 10, 207038912, 10, (void *)1, 10, 1, 10, NULL, 10, 0));
	printf("0xc7e1ab0 , c7e1ab0   , 0xc5729c0 , c5729c0   , 0x1       , 1         , 0x0       , 0          --- Return : 94\n");
	printf(" --- Return : %d\n", ft_printf("%-*p, %-*x, %-*p, %-*x, %-*p, %-*x, %-*p, %-*x", 10, (void *)209590960, 10, 209590960, 10, (void *)207038912, 10, 207038912, 10, (void *)1, 10, 1, 10, NULL, 10, 0));

	printf("\n--------------\n");
	// printf(" --- Return : %d\n", printf("%*p, %*x, %*p, %*x, %*p, %*x, %*p, %*x", 11, (void *)209590960, 11, 209590960, 11, (void *)207038912, 11, 207038912, 11, (void *)1, 11, 1, 11, NULL, 11, 0));
	printf("  0xc7e1ab0,     c7e1ab0,   0xc5729c0,     c5729c0,         0x1,           1,         0x0,           0 --- Return : 102\n");
	printf(" --- Return : %d\n", ft_printf("%*p, %*x, %*p, %*x, %*p, %*x, %*p, %*x", 11, (void *)209590960, 11, 209590960, 11, (void *)207038912, 11, 207038912, 11, (void *)1, 11, 1, 11, NULL, 11, 0));

	printf("\n--------------\n");
	// printf(" --- Return : %d\n", printf("%-*p, %-*x, %-*p, %-*x, %-*p, %-*x, %-*p, %-*x", 11, (void *)209590960, 11, 209590960, 11, (void *)207038912, 11, 207038912, 11, (void *)1, 11, 1, 11, NULL, 11, 0));
	printf("0xc7e1ab0  , c7e1ab0    , 0xc5729c0  , c5729c0    , 0x1        , 1          , 0x0        , 0           --- Return : 102\n");
	printf(" --- Return : %d\n", ft_printf("%-*p, %-*x, %-*p, %-*x, %-*p, %-*x, %-*p, %-*x", 11, (void *)209590960, 11, 209590960, 11, (void *)207038912, 11, 207038912, 11, (void *)1, 11, 1, 11, NULL, 11, 0));

	a = 12;
	b = 18;

	printf("\n---------------\n");
	// printf(" --- Return : %d\n", printf("%-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d", a, i, a, i, a, i, a, i, a, i));
	printf("8           , 000000000008, 000000000008, 000000000008, 000000000008 --- Return : 68\n");
	printf(" --- Return : %d\n", ft_printf("%-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d", a, i, a, i, a, i, a, i, a, i));

	printf("\n---------------\n");
	// printf(" --- Return : %d\n", printf("%-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d", a, j, a, j, a, j, a, j, a, j));
	printf("-12         , -000000000012, -000000000012, -000000000012, -000000000012 --- Return : 72\n");
	printf(" --- Return : %d\n", ft_printf("%-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d", a, j, a, j, a, j, a, j, a, j));

	printf("\n---------------\n");
	// printf(" --- Return : %d\n", printf("%-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d", a, l, a, l, a, l, a, l, a, l));
	printf("0           , 000000000000, 000000000000, 000000000000, 000000000000 --- Return : 68\n");
	printf(" --- Return : %d\n", ft_printf("%-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d", a, l, a, l, a, l, a, l, a, l));

	printf("\n---------------\n");
	printf("(null), , (null), (nul, (null)  , (null),   (null), (null), (null), , (, (n, (nul, (null) --- Return : 89\n");
	printf(" --- Return : %d\n", ft_printf("%-2s, %.s, %-4s, %-2.4s, %-8.12s, %3s, %8s, %---2s, %.*s, %.0s, %.1s, %.2s, %.4s, %.8s", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2, NULL, NULL, NULL, NULL, NULL, NULL));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_misc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 14:24:05 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/14 15:28:37 by lpaulo-m         ###   ########.fr       */
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

	printf(" --- Return : %d\n", printf("%c", '\0'));
	printf(" --- Return : %d\n", ft_printf("%c", '\0'));
	printf("-------------------------\n");

	printf(" --- Return : %d\n", printf("%*p, %*x, %*p, %*x, %*p, %*x, %*p, %*x", 8, (void *)209590960, 8, 209590960, 8, (void *)207038912, 8, 207038912, 8, (void *)1, 8, 1, 8, NULL, 8, 0));
	printf(" --- Return : %d\n", ft_printf("%*p, %*x, %*p, %*x, %*p, %*x, %*p, %*x", 8, (void *)209590960, 8, 209590960, 8, (void *)207038912, 8, 207038912, 8, (void *)1, 8, 1, 8, NULL, 8, 0));
	printf("-------------------------\n");
}

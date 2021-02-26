/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 03:07:41 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/02/26 03:13:32 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include "printf.h"

void aroque_examples(void);

int main(void)
{
	printf("---------------------\n");
	aroque_examples();
	printf("---------------------\n");
}

void aroque_examples(void)
{
	int printf_return;

	/* No placeholders */
	printf_return = printf("%05");
	printf("printf_return: %d\n", printf_return);

	printf_return = printf("%-05");
	printf("printf_return: %d\n", printf_return);

	printf_return = printf("%-5");
	printf("printf_return: %d\n", printf_return);

	printf_return = printf("%%\n");
	printf("printf_return: %d\n", printf_return);

	printf_return = printf("Test - No Args\n");
	printf("printf_return: %d\n", printf_return);

	/* c conversion */
	printf("%c\n", 'c');
	printf("%5c\n", 'c');
	printf("%-5c\n", 'c');
	printf("%c\n", '\0');
	printf("%5c\n", '\0');
	printf("%-5c\n", '\0');
	printf("%lc\n", 0xb1);

	/* pct conversion */
	printf("%%\n");
	printf("%8%\n");
	printf("%-8%\n");
	printf("%08%\n");
	printf("%-08%\n");
	printf("%%%%%%%%\n");
	printf("%%%%%%%\n");

	/* p conversion */
	char a = 4;
	printf("%p\n", &a);
	printf("%.p\n", &a);
	printf("%.5p\n", &a);
	printf("%4p\n", &a);
	printf("%20p\n", &a);
	printf("%-20p\n", &a);
	printf("%020p\n", &a);
	printf("%p\n", NULL);
	printf("%2p\n", NULL);
	printf("%5p\n", NULL);
	printf("%5.p\n", NULL);
	printf("%2.9p\n", 1234);
	printf("%9.2p\n", 1234);
	printf("%%\n");
	printf("Teste interessante\n");
	printf("Teste %#00*.*d, esse é o teste %s\n", 10, 5, 42, "legal");
	printf("Teste %0%\n");

	/* s conversion */
	printf("%s\n", "string");
	printf("%8s\n", "string");
	printf("%8.3s\n", "string");
	printf("%-8.3s\n", "string");
	printf("%8.s\n", "string");
	printf("%8.1s\n", "string");
	printf("%-32s\n", "abc");
	printf("%s\n", NULL);
	printf("%.0s\n", NULL);
	printf("%3.1s\n", NULL);
	printf("%9.1s\n", NULL);
	printf("%-32s\n", NULL);
	printf("%-*.*s", -7, -3, "yolo");
	printf("Test %s %s\n", "of", "string");

	/* u, x and X conversion */
	printf("%u\n", 1);
	printf("%4u\n", 1);
	printf("%-4u\n", 1);
	printf("%*.*u\n", 2, -1, 8);
	printf("%*.*u\n", -1, 2, 8);
	printf("%+#.5x\n", 0);
	printf("%+#.5x\n", 312);
	printf("%7X\n", 255);
	printf("%#7X\n", 255);
	printf("%-7X\n", 255);
	printf("%-#7X\n", 255);
	printf("%07x\n", 255);
	printf("%0#7x\n", 255);
	printf("%x\n", 0);
	printf("%#x\n", 0);
	printf("%x\n", 255);
	printf("%#x\n", 255);
	printf("%X\n", 255);
	printf("%#X\n", 255);

	/* d and i conversions */
	printf("%d\n", 0);
	printf("%5d\n", 0);
	printf("%5.3d\n", 0);
	printf("%+.0d\n", 0);
	printf("%+.5d\n", 0);
	printf("%+5.3d\n", 0);
	printf("%-+5.3d\n", 0);
	printf("%-+05.3d\n", 0);
	printf("%d\n", 1);
	printf("%+d\n", 1);
	printf("%d\n", -1);
	printf("%5.4d\n", -1);
	printf("% d\n", 42);
	printf("%d\n", LONG_MAX);
	printf("%ld\n", LONG_MAX);
	printf("%lld\n", LLONG_MAX);
	printf("%hd\n", LONG_MAX);
	printf("%d\n", 1);
	printf("%+d\n", 1);
	printf("%10d\n", 1);
	printf("%-10d\n", 1);
	printf("%+10d\n", 1);
	printf("%-+10d\n", 1);
	printf("%04d\n", 5);
	printf("%+d\n", 42);
	printf("%+2d\n", 42);
	printf("%+.1d\n", 42);
	printf("%-*.*d\n", 3, 3, -12);
	printf("%-0*i\n", 12, 8);
	printf("%-*.*d", 3, 3, -12);
	printf("%.*i", -6, -3);

	/* f conversions */
	printf("%f\n", 4.2);
	printf("%f\n", 4.29831);
	printf("%10f\n", 4.2);
	printf("%10.4f\n", 4.2);
	printf("%010.4f\n", 4.2);
	printf("%-10.4f\n", 4.2);
	printf("%-010.4f\n", 4.2);
	printf("%2.4f\n", 4.2);
	printf("%02.4f\n", 4.2);
	printf("%-2.4f\n", 4.2);
	printf("%-02.4f\n", 4.2);
	printf("%-02.1f\n", 4.2);
}

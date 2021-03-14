/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example_9.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 03:07:41 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/03/05 04:34:43 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include "printf.h"

void aroque_examples(void);

int main(void)
{
	aroque_examples();
}

void aroque_examples(void)
{
	int printf_return;

	/* No placeholders */
	printf("No placeholders examples\n");
	printf_return = printf("%05");
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("%05");
	printf("printf_return: %d\n", printf_return);
	printf("- - -");

	printf_return = printf("%-05");
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("%-05");
	printf("printf_return: %d\n", printf_return);
	printf("- - -");

	printf_return = printf("%-5");
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("%-5");
	printf("printf_return: %d\n", printf_return);
	printf("- - -");

	printf_return = printf("%%\n");
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("%%\n");
	printf("printf_return: %d\n", printf_return);
	printf("- - -");

	printf_return = printf("Test - No Args\n");
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("Test - No Args\n");
	printf("printf_return: %d\n", printf_return);
	printf("- - -");

	printf("-----------------------\n");

	/* c conversion */
	printf("c conversion examples\n");
	printf("%c\n", 'c');
	ft_printf("%c\n", 'c');
	printf("- - -");

	printf("%5c\n", 'c');
	ft_printf("%5c\n", 'c');
	printf("- - -");

	printf("%-5c\n", 'c');
	ft_printf("%-5c\n", 'c');
	printf("- - -");

	printf("%c\n", '\0');
	ft_printf("%c\n", '\0');
	printf("- - -");

	printf("%5c\n", '\0');
	ft_printf("%5c\n", '\0');
	printf("- - -");

	printf("%-5c\n", '\0');
	ft_printf("%-5c\n", '\0');
	printf("- - -");

	printf("%lc\n", 0xb1);
	ft_printf("%lc\n", 0xb1);
	printf("- - -");

	printf("-----------------------\n");

	/* pct conversion */
	printf("pct conversion examples\n");
	printf("%%\n");
	ft_printf("%%\n");
	printf("- - -");

	printf("%8%\n");
	ft_printf("%8%\n");
	printf("- - -");

	printf("%-8%\n");
	ft_printf("%-8%\n");
	printf("- - -");

	printf("%08%\n");
	ft_printf("%08%\n");
	printf("- - -");

	printf("%-08%\n");
	ft_printf("%-08%\n");
	printf("- - -");

	printf("%%%%%%%%\n");
	ft_printf("%%%%%%%%\n");
	printf("- - -");

	printf("%%%%%%%\n");
	ft_printf("%%%%%%%\n");
	printf("- - -");

	printf("-----------------------\n");

	/* p conversion */
	printf("p conversion examples\n");
	char a = 4;
	printf("%p\n", &a);
	ft_printf("%p\n", &a);
	printf("- - -");

	printf("%.p\n", &a);
	ft_printf("%.p\n", &a);
	printf("- - -");

	printf("%.5p\n", &a);
	ft_printf("%.5p\n", &a);
	printf("- - -");

	printf("%4p\n", &a);
	ft_printf("%4p\n", &a);
	printf("- - -");

	printf("%20p\n", &a);
	ft_printf("%20p\n", &a);
	printf("- - -");

	printf("%-20p\n", &a);
	ft_printf("%-20p\n", &a);
	printf("- - -");

	printf("%020p\n", &a);
	ft_printf("%020p\n", &a);
	printf("- - -");

	printf("%p\n", NULL);
	ft_printf("%p\n", NULL);
	printf("- - -");

	printf("%2p\n", NULL);
	ft_printf("%2p\n", NULL);
	printf("- - -");

	printf("%5p\n", NULL);
	ft_printf("%5p\n", NULL);
	printf("- - -");

	printf("%5.p\n", NULL);
	ft_printf("%5.p\n", NULL);
	printf("- - -");

	printf("%2.9p\n", 1234);
	ft_printf("%2.9p\n", 1234);
	printf("- - -");

	printf("%9.2p\n", 1234);
	ft_printf("%9.2p\n", 1234);
	printf("- - -");

	printf("%%\n");
	ft_printf("%%\n");
	printf("- - -");

	printf("Teste interessante\n");
	ft_printf("Teste interessante\n");
	printf("- - -");

	printf("Teste %#00*.*d, esse é o teste %s\n", 10, 5, 42, "legal");
	ft_printf("Teste %#00*.*d, esse é o teste %s\n", 10, 5, 42, "legal");
	printf("- - -");

	printf("Teste %0%\n");
	ft_printf("Teste %0%\n");
	printf("- - -");

	printf("-----------------------\n");

	/* s conversion */
	printf("s conversion examples\n");
	printf("%s\n", "string");
	ft_printf("%s\n", "string");

	printf("- - -");
	printf("%8s\n", "string");
	ft_printf("%8s\n", "string");

	printf("- - -");
	printf("%8.3s\n", "string");
	ft_printf("%8.3s\n", "string");

	printf("- - -");
	printf("%-8.3s\n", "string");
	ft_printf("%-8.3s\n", "string");

	printf("- - -");
	printf("%8.s\n", "string");
	ft_printf("%8.s\n", "string");

	printf("- - -");
	printf("%8.1s\n", "string");
	ft_printf("%8.1s\n", "string");

	printf("- - -");
	printf("%-32s\n", "abc");
	ft_printf("%-32s\n", "abc");

	printf("- - -");
	printf("%s\n", NULL);
	ft_printf("%s\n", NULL);

	printf("- - -");
	printf("%.0s\n", NULL);
	ft_printf("%.0s\n", NULL);

	printf("- - -");
	printf("%3.1s\n", NULL);
	ft_printf("%3.1s\n", NULL);

	printf("- - -");
	printf("%9.1s\n", NULL);
	ft_printf("%9.1s\n", NULL);

	printf("- - -");
	printf("%-32s\n", NULL);
	ft_printf("%-32s\n", NULL);

	printf("- - -");
	printf("%-*.*s", -7, -3, "yolo");
	ft_printf("%-*.*s", -7, -3, "yolo");

	printf("- - -");
	printf("Test %s %s\n", "of", "string");
	ft_printf("Test %s %s\n", "of", "string");

	printf("- - -");
	printf("-----------------------\n");

	/* u conversion */
	printf("u conversion examples\n");
	printf("%u\n", 1);
	ft_printf("%u\n", 1);
	printf("- - -");

	printf("%4u\n", 1);
	ft_printf("%4u\n", 1);
	printf("- - -");

	printf("%-4u\n", 1);
	ft_printf("%-4u\n", 1);
	printf("- - -");

	printf("%*.*u\n", 2, -1, 8);
	ft_printf("%*.*u\n", 2, -1, 8);
	printf("- - -");

	printf("%*.*u\n", -1, 2, 8);
	ft_printf("%*.*u\n", -1, 2, 8);
	printf("- - -");

	printf("-----------------------\n");

	/* x conversion */
	printf("x conversion examples\n");
	printf("%+#.5x\n", 0);
	ft_printf("%+#.5x\n", 0);
	printf("- - -");

	printf("%+#.5x\n", 312);
	ft_printf("%+#.5x\n", 312);
	printf("- - -");

	printf("%07x\n", 255);
	ft_printf("%07x\n", 255);
	printf("- - -");

	printf("%0#7x\n", 255);
	ft_printf("%0#7x\n", 255);
	printf("- - -");

	printf("%x\n", 0);
	ft_printf("%x\n", 0);
	printf("- - -");

	printf("%#x\n", 0);
	ft_printf("%#x\n", 0);
	printf("- - -");

	printf("%x\n", 255);
	ft_printf("%x\n", 255);
	printf("- - -");

	printf("%#x\n", 255);
	ft_printf("%#x\n", 255);
	printf("- - -");

	printf("-----------------------\n");

	/* X conversion */
	printf("X conversion examples\n");
	printf("%7X\n", 255);
	ft_printf("%7X\n", 255);
	printf("- - -");

	printf("%#7X\n", 255);
	ft_printf("%#7X\n", 255);
	printf("- - -");

	printf("%-7X\n", 255);
	ft_printf("%-7X\n", 255);
	printf("- - -");

	printf("%-#7X\n", 255);
	ft_printf("%-#7X\n", 255);
	printf("- - -");

	printf("%X\n", 255);
	ft_printf("%X\n", 255);
	printf("- - -");

	printf("%#X\n", 255);
	ft_printf("%#X\n", 255);
	printf("- - -");

	printf("-----------------------\n");

	/* d and i conversions */
	printf("d and i conversion examples\n");
	printf("%d\n", 0);
	ft_printf("%d\n", 0);
	printf("- - -");

	printf("%5d\n", 0);
	ft_printf("%5d\n", 0);
	printf("- - -");

	printf("%5.3d\n", 0);
	ft_printf("%5.3d\n", 0);
	printf("- - -");

	printf("%+.0d\n", 0);
	ft_printf("%+.0d\n", 0);
	printf("- - -");

	printf("%+.5d\n", 0);
	ft_printf("%+.5d\n", 0);
	printf("- - -");

	printf("%+5.3d\n", 0);
	ft_printf("%+5.3d\n", 0);
	printf("- - -");

	printf("%-+5.3d\n", 0);
	ft_printf("%-+5.3d\n", 0);
	printf("- - -");

	printf("%-+05.3d\n", 0);
	ft_printf("%-+05.3d\n", 0);
	printf("- - -");

	printf("%d\n", 1);
	ft_printf("%d\n", 1);
	printf("- - -");

	printf("%+d\n", 1);
	ft_printf("%+d\n", 1);
	printf("- - -");

	printf("%d\n", -1);
	ft_printf("%d\n", -1);
	printf("- - -");

	printf("%5.4d\n", -1);
	ft_printf("%5.4d\n", -1);
	printf("- - -");

	printf("% d\n", 42);
	ft_printf("% d\n", 42);
	printf("- - -");

	printf("%d\n", LONG_MAX);
	ft_printf("%d\n", LONG_MAX);
	printf("- - -");

	printf("%ld\n", LONG_MAX);
	ft_printf("%ld\n", LONG_MAX);
	printf("- - -");

	printf("%lld\n", LLONG_MAX);
	ft_printf("%lld\n", LLONG_MAX);
	printf("- - -");

	printf("%hd\n", LONG_MAX);
	ft_printf("%hd\n", LONG_MAX);
	printf("- - -");

	printf("%d\n", 1);
	ft_printf("%d\n", 1);
	printf("- - -");

	printf("%+d\n", 1);
	ft_printf("%+d\n", 1);
	printf("- - -");

	printf("%10d\n", 1);
	ft_printf("%10d\n", 1);
	printf("- - -");

	printf("%-10d\n", 1);
	ft_printf("%-10d\n", 1);
	printf("- - -");

	printf("%+10d\n", 1);
	ft_printf("%+10d\n", 1);
	printf("- - -");

	printf("%-+10d\n", 1);
	ft_printf("%-+10d\n", 1);
	printf("- - -");

	printf("%04d\n", 5);
	ft_printf("%04d\n", 5);
	printf("- - -");

	printf("%+d\n", 42);
	ft_printf("%+d\n", 42);
	printf("- - -");

	printf("%+2d\n", 42);
	ft_printf("%+2d\n", 42);
	printf("- - -");

	printf("%+.1d\n", 42);
	ft_printf("%+.1d\n", 42);
	printf("- - -");

	printf("%-*.*d\n", 3, 3, -12);
	ft_printf("%-*.*d\n", 3, 3, -12);
	printf("- - -");

	printf("%-0*i\n", 12, 8);
	ft_printf("%-0*i\n", 12, 8);
	printf("- - -");

	printf("%-*.*d", 3, 3, -12);
	ft_printf("%-*.*d", 3, 3, -12);
	printf("- - -");

	printf("%.*i", -6, -3);
	ft_printf("%.*i", -6, -3);
	printf("- - -");

	printf("\n-----------------------\n");

	/* f conversions */
	printf("f conversion examples\n");
	printf("%f\n", 4.2);
	ft_printf("%f\n", 4.2);
	printf("- - -");

	printf("%f\n", 4.29831);
	ft_printf("%f\n", 4.29831);
	printf("- - -");

	printf("%10f\n", 4.2);
	ft_printf("%10f\n", 4.2);
	printf("- - -");

	printf("%10.4f\n", 4.2);
	ft_printf("%10.4f\n", 4.2);
	printf("- - -");

	printf("%010.4f\n", 4.2);
	ft_printf("%010.4f\n", 4.2);
	printf("- - -");

	printf("%-10.4f\n", 4.2);
	ft_printf("%-10.4f\n", 4.2);
	printf("- - -");

	printf("%-010.4f\n", 4.2);
	ft_printf("%-010.4f\n", 4.2);
	printf("- - -");

	printf("%2.4f\n", 4.2);
	ft_printf("%2.4f\n", 4.2);
	printf("- - -");

	printf("%02.4f\n", 4.2);
	ft_printf("%02.4f\n", 4.2);
	printf("- - -");

	printf("%-2.4f\n", 4.2);
	ft_printf("%-2.4f\n", 4.2);
	printf("- - -");

	printf("%-02.4f\n", 4.2);
	ft_printf("%-02.4f\n", 4.2);
	printf("- - -");

	printf("%-02.1f\n", 4.2);
	ft_printf("%-02.1f\n", 4.2);
	printf("- - -");

	printf("-----------------------\n");
}

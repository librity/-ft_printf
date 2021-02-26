/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   micro_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:23:03 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/02/26 03:13:25 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

void micro_printf(char *fmt, ...);

int main(int argc, char *argv[])
{
	micro_printf(argv[0]);
	micro_printf("\nHello\n");
	micro_printf("Test String %s with integer %i and %% test\n", argv[0], argc);

	return 0;
}

void micro_printf(char *fmt, ...)
{
	va_list ap;
	char *p, *sval;
	int ival;
	double dval;

	va_start(ap, fmt);
	for (p = fmt; *p; p++)
	{
		if (*p != '%')
		{
			putchar(*p);
			continue;
		}
		switch (*++p)
		{
		case 'd':
			ival = va_arg(ap, int);
			printf("%d", ival);
			break;
		case 'f':
			dval = va_arg(ap, double);
			printf("%f", dval);
			break;
		case 's':
			for (sval = va_arg(ap, char *); *sval; sval++)
				putchar(*sval);
			break;
		default:
			putchar(*p);
			break;
		}
	}
	va_end(ap);
}

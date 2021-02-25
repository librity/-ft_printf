/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadic_formatter.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m@student.42sp.org.br <lpaulo-m>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 03:14:06 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/02/25 17:35:21 by lpaulo-m@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

void foo(char *fmt, ...)
{
	va_list ap;
	int d;
	char c, *s;

	va_start(ap, fmt);
	while (*fmt)
		switch (*fmt++)
		{
		case 's':
			s = va_arg(ap, char *);
			printf("string %s\n", s);
			break;
		case 'd':
			d = va_arg(ap, int);
			printf("int %d\n", d);
			break;
		case 'c':
			c = (char)va_arg(ap, int);
			printf("char %c\n", c);
			break;
		}
	va_end(ap);
}

int formatStr(char *dest, const char *formatted_str, ...)
{
	va_list pargs;

	va_start(pargs, formatted_str);
	int n_chars = vsprintf(dest, formatted_str, pargs);

	puts(dest);
	va_end(pargs);
	return n_chars;
}

int main(void)
{
	foo("sdc", "KBLAMO", 42, '[');

	char f_str[50];
	char name[] = "Johnson";
	double height = 170.43;
	formatStr(f_str, "Name: %s, Height: %f", name, height);
	printf("%s\n", f_str);
	return (0);
}

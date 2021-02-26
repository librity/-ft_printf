/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadic_tester.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:49:12 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/02/26 03:13:39 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

void testit(int i, ...)
{
	va_list argptr;
	va_start(argptr, i);

	if (i == 0)
	{
		int n = va_arg(argptr, int);
		printf("%d\n", n);
	}
	else
	{
		char *s = va_arg(argptr, char *);
		printf("%s\n", s);
	}

	va_end(argptr);
}

int main()
{
	testit(0, 0xFFFFFFFF);
	testit(0, 42);
	testit(1, NULL);
	testit(1, "If you like pinha coladas!");
	testit(1, "last call hail mary prescott touchdown");
}

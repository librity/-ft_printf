/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadic_maxof.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m@student.42sp.org.br <lpaulo-m>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 03:04:14 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/02/24 23:51:59 by lpaulo-m@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int maxoff(int n_args, ...)
{
	register int i;
	int max, a;
	va_list ap;

	va_start(ap, n_args);
	max = va_arg(ap, int);
	for (i = 2; i <= n_args; i++)
	{
		if ((a = va_arg(ap, int)) > max)
			max = a;
	}

	va_end(ap);
	return max;
}

int maxof(int n_args, ...)
{
	va_list ap;
	va_start(ap, n_args);
	int max = va_arg(ap, int);
	for (int i = 2; i <= n_args; i++)
	{
		int a = va_arg(ap, int);
		if (a > max)
			max = a;
	}
	va_end(ap);
	return max;
}

int main(void)
{
	printf("MAXOF 1 2 3: %d\n", maxof(3, 1, 2, 3));
	printf("MAXOF 5 3 6: %d\n", maxof(3, 5, 3, 6));
	printf("MAXOF 9 3 7: %d\n", maxof(3, 9, 3, 7));

	int i = 5;
	int j[256];
	j[42] = 24;
	printf("MAXOF 3 5 42 0: %d\n", maxoff(3, i, j[42], 0));

	return (0);
}

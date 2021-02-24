/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m@student.42sp.org.br <lpaulo-m>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 03:07:41 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/02/24 16:02:22 by lpaulo-m@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include "printf.h"

void example1(void);

int main(void)
{
	printf("---------------------\n");
	example1();
	printf("---------------------\n");
}

void example1(void)
{
	int a, b;
	float c, d;

	a = 15;
	b = a / 2;
	printf("%d\n", b);
	printf("%3d\n", b);
	printf("%03d\n", b);

	c = 15.3;
	d = c / 3;
	printf("%3.2f\n", d);
}

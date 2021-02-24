/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m@student.42sp.org.br <lpaulo-m>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 03:07:41 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/02/24 16:03:09 by lpaulo-m@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include "printf.h"

void example2(void);
void example3(void);
void example4(void);
void example5(void);
void example6(void);

int main(void)
{
	printf("---------------------\n");
	example2();
	printf("---------------------\n");
}

void example2(void)
{
	int Fahrenheit;

	for (Fahrenheit = 0; Fahrenheit <= 300; Fahrenheit = Fahrenheit + 20)
		printf("%3d %06.3f\n", Fahrenheit, (5.0 / 9.0) * (Fahrenheit - 32));
}

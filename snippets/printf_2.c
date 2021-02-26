/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 03:07:41 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/02/26 03:13:27 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include "printf.h"

void example2(void);

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

	printf("---------------------\n");
	for (Fahrenheit = 0; Fahrenheit <= 300; Fahrenheit = Fahrenheit + 20)
		printf("%3d %07.3f\n", Fahrenheit, (5.0 / 9.0) * (Fahrenheit - 32));

	printf("---------------------\n");
	for (Fahrenheit = 0; Fahrenheit <= 300; Fahrenheit = Fahrenheit + 20)
		printf("%3d %08.3f\n", Fahrenheit, (5.0 / 9.0) * (Fahrenheit - 32));
}

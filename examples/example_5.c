/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 03:07:41 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/03/04 18:02:09 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include "printf.h"

void example3(void);

int main(void)
{

	printf("---------------------\n");
	example3();
	printf("---------------------\n");
}

void example3(void)
{
	printf("The color: %s\n", "blue");
	ft_printf("The color: %s\n", "blue");
	printf("------------------------");

	printf("First number: %d\n", 12345);
	ft_printf("First number: %d\n", 12345);
	printf("------------------------");

	printf("Second number: %04d\n", 25);
	ft_printf("Second number: %04d\n", 25);
	printf("------------------------");

	printf("Third number: %i\n", 1234);
	ft_printf("Third number: %i\n", 1234);
	printf("------------------------");

	printf("Float number: %3.2f\n", 3.14159);
	ft_printf("Float number: %3.2f\n", 3.14159);
	printf("------------------------");

	printf("Hexadecimal x: %x\n", 255);
	ft_printf("Hexadecimal x: %x\n", 255);
	printf("------------------------");

	printf("Hexadecimal X: %X\n", 255);
	ft_printf("Hexadecimal X: %X\n", 255);
	printf("------------------------");

	printf("Octal: %o\n", 255);
	ft_printf("Octal: %o\n", 255);
	printf("------------------------");

	printf("Unsigned value: %u\n", 150);
	ft_printf("Unsigned value: %u\n", 150);
	printf("------------------------");

	printf("Just print the percentage sign %%\n", 10);
	ft_printf("Just print the percentage sign %%\n", 10);
	printf("------------------------");
}

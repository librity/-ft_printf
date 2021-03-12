/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 03:07:41 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/03/12 09:00:16 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include "ft_printf.h"

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
	printf("------------------------\n");

	printf("First number: %d\n", 12345);
	ft_printf("First number: %d\n", 12345);
	printf("------------------------\n");

	printf("Second number: %04d\n", 25);
	ft_printf("Second number: %04d\n", 25);
	printf("------------------------\n");

	printf("Third number: %i\n", 1234);
	ft_printf("Third number: %i\n", 1234);
	printf("------------------------\n");

	printf("Float number: %3.2f\n", 3.14159);
	ft_printf("Float number: %3.2f\n", 3.14159);
	printf("------------------------\n");

	printf("Hexadecimal x: %x\n", 255);
	ft_printf("Hexadecimal x: %x\n", 255);
	printf("------------------------\n");

	printf("Hexadecimal X: %X\n", 255);
	ft_printf("Hexadecimal X: %X\n", 255);
	printf("------------------------\n");

	printf("Octal: %o\n", 255);
	ft_printf("Octal: %o\n", 255);
	printf("------------------------\n");

	printf("Unsigned value: %u\n", 150);
	ft_printf("Unsigned value: %u\n", 150);
	printf("------------------------\n");

	printf("Just print the percentage sign %%\n", 10);
	ft_printf("Just print the percentage sign %%\n", 10);
	printf("------------------------\n");
}

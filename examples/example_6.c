/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example_6.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 03:07:41 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/03/04 18:02:27 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include "printf.h"

void example4(void);

int main(void)
{
	printf("---------------------\n");
	example4();
	printf("---------------------\n");
}

void example4(void)
{
	printf("          '012345679123456'\n");
	ft_printf("          '012345679123456'\n");
	printf("------------------------");

	printf("%%s:       '%s'\n", "Hello, world!");
	ft_printf("%%s:       '%s'\n", "Hello, world!");
	printf("------------------------");

	printf("%%15s:     '%15s'\n", "Hello, world!");
	ft_printf("%%15s:     '%15s'\n", "Hello, world!");
	printf("------------------------");

	printf("%%.10s:    '%.10s'\n", "Hello, world!");
	ft_printf("%%.10s:    '%.10s'\n", "Hello, world!");
	printf("------------------------");

	printf("%%-10s:    '%-10s'\n", "Hello, world!");
	ft_printf("%%-10s:    '%-10s'\n", "Hello, world!");
	printf("------------------------");

	printf("%%-15s:    '%-15s'\n", "Hello, world!");
	ft_printf("%%-15s:    '%-15s'\n", "Hello, world!");
	printf("------------------------");

	printf("%%.15s:    '%.15s'\n", "Hello, world!");
	ft_printf("%%.15s:    '%.15s'\n", "Hello, world!");
	printf("------------------------");

	printf("%%15.10s:  '%15.10s'\n", "Hello, world!");
	ft_printf("%%15.10s:  '%15.10s'\n", "Hello, world!");
	printf("------------------------");

	printf("%%-15.10s: '%-15.10s'\n", "Hello, world!");
	ft_printf("%%-15.10s: '%-15.10s'\n", "Hello, world!");
	printf("------------------------");
}

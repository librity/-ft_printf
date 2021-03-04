/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example_7.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 03:07:41 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/03/04 18:02:40 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include "printf.h"

void example5(void);

int main(void)
{
	printf("---------------------\n");
	example5();
	printf("---------------------\n");
}

void example5(void)
{
	printf("Characters: '%c' '%c' \n", 'a', 65);
	ft_printf("Characters: '%c' '%c' \n", 'a', 65);
	printf("------------------------");

	printf("Decimals: '%d' '%ld'\n", 1977, 650000L);
	ft_printf("Decimals: '%d' '%ld'\n", 1977, 650000L);
	printf("------------------------");

	printf("Preceding with blanks: '%10d' \n", 1977);
	ft_printf("Preceding with blanks: '%10d' \n", 1977);
	printf("------------------------");

	printf("Preceding with zeros: '%010d' \n", 1977);
	ft_printf("Preceding with zeros: '%010d' \n", 1977);
	printf("------------------------");

	printf("Some different radices: '%d' '%x' '%o' '%#x' '%#o' \n", 100, 100, 100, 100, 100);
	ft_printf("Some different radices: '%d' '%x' '%o' '%#x' '%#o' \n", 100, 100, 100, 100, 100);
	printf("------------------------");

	printf("floats: '%4.2f' '%+.0e' '%E' \n", 3.1416, 3.1416, 3.1416);
	ft_printf("floats: '%4.2f' '%+.0e' '%E' \n", 3.1416, 3.1416, 3.1416);
	printf("------------------------");

	printf("Width trick: '%*d' \n", 5, 10);
	ft_printf("Width trick: '%*d' \n", 5, 10);
	printf("------------------------");

	printf("'%s' \n", "A string");
	ft_printf("'%s' \n", "A string");
	printf("------------------------");
}

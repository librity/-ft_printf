/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m@student.42sp.org.br <lpaulo-m>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 03:07:41 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/02/24 18:00:34 by lpaulo-m@st      ###   ########.fr       */
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
	printf("Decimals: '%d' '%ld'\n", 1977, 650000L);
	printf("Preceding with blanks: '%10d' \n", 1977);
	printf("Preceding with zeros: '%010d' \n", 1977);
	printf("Some different radices: '%d' '%x' '%o' '%#x' '%#o' \n", 100, 100, 100, 100, 100);
	printf("floats: '%4.2f' '%+.0e' '%E' \n", 3.1416, 3.1416, 3.1416);
	printf("Width trick: '%*d' \n", 5, 10);
	printf("'%s' \n", "A string");
}

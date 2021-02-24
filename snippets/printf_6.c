/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_6.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m@student.42sp.org.br <lpaulo-m>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 03:07:41 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/02/24 18:01:17 by lpaulo-m@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include "printf.h"

void example6(void);

int main(void)
{
	printf("---------------------\n");
	example6();
	printf("---------------------\n");
}

void example6(void)
{
	int ch;

	for (ch = -129; ch <= 129; ch++)
	{
		printf("ASCII value = '%d', Character = '%c'\n", ch, ch);
	}
}
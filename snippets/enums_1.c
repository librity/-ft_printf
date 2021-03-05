/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enums_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 02:48:20 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/05 03:00:10 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef enum
{
	val1 = 0x12
} type1;

typedef enum
{
	val2 = 0x123456789
} type2;

int main(void)
{
	printf("1: %zu\n2: %zu\n", sizeof(type1), sizeof(type2));

	printf("val1: %lu\n", val1);
	printf("val2: %lu\n", val2);

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unions_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 02:50:57 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/05 02:51:36 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

union Data
{
	int i;
	float f;
	char str[20];
};

int main(void)
{
	union Data data;
	printf("Memory size occupied by data : %d\n", sizeof(data));

	data.i = 10;
	data.f = 220.5;
	strcpy(data.str, "C Programming");

	printf("data.i : %d\n", data.i);
	printf("data.f : %f\n", data.f);
	printf("data.str : %s\n", data.str);

	return 0;
}
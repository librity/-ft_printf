/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdint.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 20:23:29 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/25 20:30:23 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// gcc stdint.c && ./a.out

#include <unistd.h>
#include <stdint.h>
#include <stdio.h>

int main()
{
	int8_t i8;	 // signed char
	int16_t i16; // signed short
	int32_t i32; // signed int
	int64_t i64; // signed long

	uint8_t ui8;   // unsigned char
	uint16_t ui16; // unsigned short
	uint32_t ui32; // unsigned int
	uint64_t ui64; // unsigned long

	intmax_t imax;	 // long
	uintmax_t uimax; // unsigned long
	size_t size;	 // unsigned long

	printf("int8_t: %d\n", sizeof(i8));
	printf("int16_t: %d\n", sizeof(i16));
	printf("int32_t: %d\n", sizeof(i32));
	printf("int64_t: %d\n", sizeof(i64));

	printf("uint8_t: %d\n", sizeof(ui8));
	printf("uint16_t: %d\n", sizeof(ui16));
	printf("uint32_t: %d\n", sizeof(ui32));
	printf("uint64_t: %d\n", sizeof(ui64));

	printf("intmax_t: %d\n", sizeof(imax));
	printf("uintmax_t: %d\n", sizeof(uimax));
	printf("size_t: %d\n", sizeof(size));

	return 0;
}

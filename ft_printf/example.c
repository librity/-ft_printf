/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m@student.42sp.org.br <lpaulo-m>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 19:27:11 by lcandido          #+#    #+#             */
/*   Updated: 2021/02/26 02:19:29 by lpaulo-m@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	int printf_return;

	printf_return = printf("TESTING 123\n");
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("TESTING 123\n");
	printf("printf_return: %d\n", printf_return);
	printf("-----------------------\n");

	printf_return = printf("%s\n", "TESTING 123");
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("%s\n", "TESTING 123");
	printf("printf_return: %d\n", printf_return);
	printf("-----------------------\n");

	printf_return = printf("%s %%\n", "TESTING 123");
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("%s %%\n", "TESTING 123");
	printf("printf_return: %d\n", printf_return);
	printf("-----------------------\n");

	return (0);
}

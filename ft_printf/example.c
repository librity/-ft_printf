/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 19:27:11 by lcandido          #+#    #+#             */
/*   Updated: 2021/02/26 03:12:55 by lpaulo-m         ###   ########.fr       */
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

	printf_return = printf("%s\n", "This is a string");
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("%s\n", "This is a string");
	printf("printf_return: %d\n", printf_return);
	printf("-----------------------\n");

	printf_return = printf("%s %%\n", "I like turtles");
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("%s %%\n", "I like turtles");
	printf("printf_return: %d\n", printf_return);
	printf("-----------------------\n");

	printf_return = printf("%d\n", 42);
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("%d\n", 42);
	printf("printf_return: %d\n", printf_return);
	printf("-----------------------\n");

	printf_return = printf("%i\n", 42);
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("%i\n", 42);
	printf("printf_return: %d\n", printf_return);
	printf("-----------------------\n");

	printf_return = printf("%c\n", 'L');
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("%c\n", 'L');
	printf("printf_return: %d\n", printf_return);
	printf("-----------------------\n");

	return (0);
}

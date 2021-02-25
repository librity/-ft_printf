/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m@student.42sp.org.br <lpaulo-m>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 23:39:26 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/02/24 23:46:22 by lpaulo-m@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// SOURCE https://www.youtube.com/watch?v=Y9kUWsyyChk

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int printf_new(char *pszFormatString, ...);
int printf_manual(char *pszFormatString, ...);

int main(int argc, char *argv[])
{
	printf_new(argv[0]);
	printf_new("\nHello\n");
	printf_new("Test String %s with integer %i and %% test\n", argv[0], argc);

	printf_manual(argv[0]);
	printf_manual("\nHello\n");
	printf_manual("Test String %s with integer %i and %% test\n", argv[0], argc);

	return 0;
}

static size_t count_digits(int n)
{
	size_t digit_count;

	digit_count = 1;
	while (n /= 10)
		digit_count++;
	return (digit_count);
}

static void write_digits(
	char *string, size_t digit_count, unsigned int number, int is_negative)
{
	string[digit_count] = '\0';
	while (digit_count--)
	{
		string[digit_count] = '0' + (number % 10);
		number /= 10;
	}
	if (is_negative)
		string[0] = '-';
}

char *ft_itoa(int n)
{
	size_t digit_count;
	unsigned int number;
	unsigned int is_negative;
	char *string;

	digit_count = count_digits(n);
	number = (unsigned int)n;
	is_negative = 0;
	if (n < 0)
	{
		number *= -1;
		is_negative = 1;
		digit_count++;
	}
	string = malloc(sizeof(char) * (digit_count + 1));
	if (string == NULL)
		return (NULL);
	write_digits(string, digit_count, number, is_negative);
	return (string);
}

int printf_new(char *pszFormatString, ...)
{
	int CharacterCount = 0;
	int PrintInteger;
	char *IntegerString;
	char *pPrintString;
	va_list VaList;

	va_start(VaList, pszFormatString);

	while (*pszFormatString)
	{
		if (*pszFormatString == '%')
		{
			pszFormatString++;
			switch (*pszFormatString)
			{
			case 's':
				pPrintString = va_arg(VaList, char *);
				fputs(pPrintString, stdout);
				pszFormatString++;
				CharacterCount += strlen(pPrintString);
				break;
			case 'i':
				PrintInteger = va_arg(VaList, int);
				IntegerString = ft_itoa(PrintInteger);
				fputs(IntegerString, stdout);
				pszFormatString++;
				CharacterCount += strlen(IntegerString);
				break;
			case '%':
				putchar('%');
				pszFormatString++;
				CharacterCount++;
				break;
			case '\0':
				break;
			default:
				putchar('%');
				putchar(*pszFormatString);
				pszFormatString++;
				CharacterCount += 2;
			}
		}
		else
		{
			putchar(*pszFormatString);
			pszFormatString++;
			CharacterCount++;
		}
	}

	va_end(VaList);

	return CharacterCount;
}

int printf_manual(char *pszFormatString, ...)
{
	int CharacterCount = 0;
	int PrintInteger;
	char *IntegerString;
	char *pPrintString;
	void *StackLocation;

	StackLocation = &pszFormatString;
	StackLocation = ((void **)StackLocation) + 1;

	while (*pszFormatString)
	{
		if (*pszFormatString == '%')
		{
			pszFormatString++;
			switch (*pszFormatString)
			{
			case 's':
				pPrintString = (char *)*((char **)StackLocation);
				StackLocation = ((void **)StackLocation) + 1;
				fputs(pPrintString, stdout);
				pszFormatString++;
				CharacterCount += strlen(pPrintString);
				break;
			case 'i':
				PrintInteger = (int)*((int *)StackLocation);
				StackLocation = ((void **)StackLocation) + 1;
				IntegerString = ft_itoa(PrintInteger);
				fputs(IntegerString, stdout);
				pszFormatString++;
				CharacterCount += strlen(IntegerString);
				break;
			case '%':
				putchar('%');
				pszFormatString++;
				CharacterCount++;
				break;
			case '\0':
				break;
			default:
				putchar('%');
				putchar(*pszFormatString);
				pszFormatString++;
				CharacterCount += 2;
			}
		}
		else
		{
			putchar(*pszFormatString);
			pszFormatString++;
			CharacterCount++;
		}
	}

	return CharacterCount;
}

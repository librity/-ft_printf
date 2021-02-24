/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadic_logger.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m@student.42sp.org.br <lpaulo-m>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 03:12:48 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/02/24 03:12:52 by lpaulo-m@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>
#include <stdarg.h>

void tlog(const char *fmt, ...)
{
	char msg[50];
	strftime(msg, sizeof msg, "%T", localtime(&(time_t){time(NULL)}));
	printf("[%s] ", msg);
	va_list args;
	va_start(args, fmt);
	vprintf(fmt, args);
	va_end(args);
}

int main(void)
{
	tlog("logging %d %d %d...\n", 1, 2, 3);
}

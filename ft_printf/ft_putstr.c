/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:17:38 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/04 15:37:22 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Writes string s to file descriptor fd without null terminator.
*/

void	ft_putstr(char *s)
{
	if (s == NULL)
		return ;
	while (*s)
		ft_putchar(*s++);
}

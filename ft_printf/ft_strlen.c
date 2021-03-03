/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:15:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/03 03:15:52 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Counts how many chars string s has (no \0).
*/

size_t	ft_strlen(const char *s)
{
	size_t length;

	length = 0;
	while (s[length])
		length++;
	return (length);
}

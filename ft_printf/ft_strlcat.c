/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 02:33:19 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/05 02:33:39 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t destination_length;

	destination_length = ft_strlen(dst);
	if (size <= destination_length)
		return (size + ft_strlen(src));
	while (*src && destination_length < size - 1)
		*(dst + destination_length++) = *src++;
	*(dst + destination_length) = '\0';
	return (destination_length + ft_strlen(src));
}

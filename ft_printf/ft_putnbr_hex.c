/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 07:42:34 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/04 18:46:22 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static bool	is_invalid_base(const char *base, const size_t base_length)
{
	size_t			current_position;
	size_t			used_characters_position;
	char		used_characters[base_length + 1];

	if (base_length == 0 || base_length == 1)
		return (true);
	current_position = 0;
	used_characters[0] = '\0';
	while (base[current_position] != '\0')
	{
		if (base[current_position] == '+' || base[current_position] == '-')
			return (1);
		used_characters_position = 0;
		while (used_characters[used_characters_position] != '\0')
		{
			if (used_characters[used_characters_position]
				== base[current_position])
				return (true);
			used_characters_position++;
		}
		used_characters[used_characters_position] = base[current_position];
		used_characters[used_characters_position + 1] = '\0';
		current_position++;
	}
	return (false);
}

static void	print_number_with_base(unsigned int number,
									const size_t base_length,
									const char *base)
{
	if (number >= base_length)
		print_number_with_base(number / base_length, base_length, base);
	ft_putchar(base[number % base_length]);
}

void		ft_putnbr_hex(unsigned int number, const char *base)
{
	const size_t	base_length = ft_strlen(base);

	if (is_invalid_base(base, base_length))
		return ;
	print_number_with_base(number, base_length, base);
}

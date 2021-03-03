/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 07:42:34 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/03 07:45:51 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_invalid_base(const char *base, const size_t base_length)
{
	int			current_position;
	int			used_characters_position;
	char		used_characters[base_length + 1];

	if (base_length == 0 || base_length == 1)
		return (1);
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
				return (1);
			used_characters_position++;
		}
		used_characters[used_characters_position] = base[current_position];
		used_characters[used_characters_position + 1] = '\0';
		current_position++;
	}
	return (0);
}

static void	print_number_with_base(size_t number,
								const size_t base_length,
								const char *base)
{
	if (number >= base_length)
		print_number_with_base(number / base_length, base_length, base);
	ft_putchar(base[number % base_length]);
}

void		ft_putnbr_base(size_t nbr, const char *base)
{
	const size_t	base_length = ft_strlen(base);

	if (is_invalid_base(base, base_length))
		return ;
	print_number_with_base(nbr, base_length, base);
}

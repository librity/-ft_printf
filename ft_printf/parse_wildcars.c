/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_wildcars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/08 02:46:01 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_wildcard(t_printf *print_control,
							t_handle_int *int_control,
							t_parse_wildcards *control)
{
	control->wildcard = va_arg(print_control->elements, int);
	control->parser += ft_i_to_buffer(control->wildcard,
								int_control->parsed_flags + control->parser);
	(int_control->flags)++;
	control->conversion_position--;
}

static bool	handled_default(t_handle_int *int_control,
							t_parse_wildcards *control)
{
	if (*(int_control->flags) == '*')
		return (false);
	int_control->parsed_flags[control->parser] = *(int_control->flags);
	(int_control->flags)++;
	(control->parser)++;
	control->conversion_position--;
	return (true);
}

void		parse_wildcars(t_printf *print_control, t_handle_int *int_control)
{
	t_parse_wildcards control;

	initialize_wildcard_control(print_control, int_control, &control);
	if ((control.found_wildcards) == NULL)
		return ;
	int_control->has_wildcards = true;
	while ((control.conversion_position) > 0 && *(int_control->flags) != '\0')
	{
		if (handled_default(int_control, &control))
			continue ;
		handle_wildcard(print_control, int_control, &control);
	}
	(int_control->parsed_flags)[control.parser] = '\0';
	int_control->flags = int_control->parsed_flags;
}

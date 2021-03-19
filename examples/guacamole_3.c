/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   guacamole_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:40:07 by mchardin          #+#    #+#             */
/*   Updated: 2021/03/19 01:16:32 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{

	ft_printf("\n--------------\n");
	ft_printf("0x0000004d2\n --- Return : 12\n");
	ft_printf(" --- Return : %d\n", ft_printf("%2.9p\n", 1234));

	ft_printf("\n--------------\n");
	ft_printf("0x00000 --- Return : 7\n");
	ft_printf(" --- Return : %d\n", ft_printf("%.5p", 0));
}

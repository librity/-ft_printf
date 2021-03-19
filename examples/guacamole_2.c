/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   guacamole_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:40:07 by mchardin          #+#    #+#             */
/*   Updated: 2021/03/19 00:46:23 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{

	ft_printf("\n--------------\n");
	// ft_printf(" --- Return : %d\n", printf("%-192.131%"));
	ft_printf("%%                                                                                                                                                                                                --- Return : 192\n");
	ft_printf(" --- Return : %d\n", ft_printf("%-192.131%"));

	ft_printf("\n--------------\n");
	// ft_printf(" --- Return : %d\n", printf("%-70.193x%-140c%168c%026.51%%0125.119X", 1102840003u, -50, -17, 3721437512u));
	ft_printf("0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000041bc00c3                                                                                                                                                                                                                                                                                                                  0000000000000000000000000%%      000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000DDD0A148 --- Return : 652\n");
	ft_printf(" --- Return : %d\n", ft_printf("%-70.193x%-140c%168c%026.51%%0125.119X", 1102840003u, -50, -17, 3721437512u));

	ft_printf("\n--------------\n");
	ft_printf("|0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000041bc00c3|\n|                                                                                                                                           |\n|                                                                                                                                                                       |\n|0000000000000000000000000%%|\n|      000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000DDD0A148| --- Return : 665\n");
	ft_printf(" --- Return : %d\n", ft_printf("|%-70.193x|\n|%-140c|\n|%168c|\n|%026.51%|\n|%0125.119X|", 1102840003u, -50, -17, 3721437512u));

	ft_printf("\n--------------\n");
	ft_printf("0000000000000000000000000%% --- Return : 26\n");
	ft_printf(" --- Return : %d\n", ft_printf("%026.51%"));

	ft_printf("\n--------------\n");
	ft_printf("%%                          --- Return : 26\n");
	ft_printf(" --- Return : %d\n", ft_printf("%0-26.51%"));

	ft_printf("\n--------------\n");
	ft_printf("                         a --- Return : 26\n");
	ft_printf(" --- Return : %d\n", ft_printf("%026.51c", 'a'));

	ft_printf("\n--------------\n");
	ft_printf("a                          --- Return : 26\n");
	ft_printf(" --- Return : %d\n", ft_printf("%0-26.51c", 'a'));

	ft_printf("\n--------------\n");
	ft_printf("0xf13f098b3245db38                                                                                    0x5eb76d04628060fc                                                                         %%                                                                                                                             --- Return : 318\n");
	ft_printf(" --- Return : %d\n", ft_printf("%-102p%-91p%00*.32%", (void *)17383623580121946936lu, (void *)6825043625903153404lu, -125));

	ft_printf("\n--------------\n");
	ft_printf("|%%                                                                                                                            | --- Return : 127\n");
	ft_printf(" --- Return : %d\n", ft_printf("|%00*.32%|", -125));

	ft_printf("\n--------------\n");
	ft_printf("0x --- Return : 2\n");
	ft_printf(" --- Return : %d\n", ft_printf("%.p", NULL));

	ft_printf("\n--------------\n");
	ft_printf("0x --- Return : 2\n");
	ft_printf(" --- Return : %d\n", ft_printf("%.p", NULL));

	ft_printf("\n--------------\n");
	ft_printf("0x --- Return : 2\n");
	ft_printf(" --- Return : %d\n", ft_printf("%1.p", NULL));

	ft_printf("\n--------------\n");
	ft_printf("0x --- Return : 2\n");
	ft_printf(" --- Return : %d\n", ft_printf("%1.p", NULL));

	ft_printf("\n--------------\n");
	ft_printf("   0x --- Return : 5\n");
	ft_printf(" --- Return : %d\n", ft_printf("%5.p", NULL));

	ft_printf("\n--------------\n");
	ft_printf("   0x --- Return : 5\n");
	ft_printf(" --- Return : %d\n", ft_printf("%5.p", NULL));

	ft_printf("\n--------------\n");
	ft_printf("-->|0x              |<--  --- Return : 25\n");
	ft_printf(" --- Return : %d\n", ft_printf("-->|%-16.p|<-- ", NULL));

	ft_printf("\n--------------\n");
	ft_printf("-->|0x              |<--  --- Return : 25\n");
	ft_printf(" --- Return : %d\n", ft_printf("-->|%-16.p|<-- ", NULL));
}

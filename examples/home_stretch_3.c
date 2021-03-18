/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   home_stretch_3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 01:09:56 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/18 01:27:43 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%.09s", NULL));
	printf(" --- Return : %d\n", ft_printf("%.09s", NULL));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%3.6s", NULL));
	printf(" --- Return : %d\n", ft_printf("%3.6s", NULL));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%20.6s", NULL));
	printf(" --- Return : %d\n", ft_printf("%20.6s", NULL));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%-3.8s", NULL));
	printf(" --- Return : %d\n", ft_printf("%-3.8s", NULL));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%-10.8s", NULL));
	printf(" --- Return : %d\n", ft_printf("%-10.8s", NULL));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%0176.18i%0131.59i%-86X%---45.36X", -1748967713, -1568187420, 124888334u, 2293430389u));
	printf(" --- Return : %d\n", ft_printf("%0176.18i%0131.59i%-86X%---45.36X", -1748967713, -1568187420, 124888334u, 2293430389u));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%---137.49s%-127.121X", "!^3W]E;3T;FBR(KBN|03|!us3&sT[", 2181790462u));
	printf(" --- Return : %d\n", ft_printf("%---137.49s%-127.121X", "!^3W]E;3T;FBR(KBN|03|!us3&sT[", 2181790462u));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%-75.38s%-148.135s%00156.106i%-*.105%", "q;&kDMa}NfJoOp\\luHJ", NULL, 1930062644, 105));
	printf(" --- Return : %d\n", ft_printf("%-75.38s%-148.135s%00156.106i%-*.105%", "q;&kDMa}NfJoOp\\luHJ", NULL, 1930062644, 105));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%-149.*%%-114.120i%0*.24%%--*.28d", -63, 1318471055, -125, -68, -1205906582));
	printf(" --- Return : %d\n", ft_printf("%-149.*%%-114.120i%0*.24%%--*.28d", -63, 1318471055, -125, -68, -1205906582));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%---34c%-107.*u", 7, -168, 2003619509u));
	printf(" --- Return : %d\n", ft_printf("%---34c%-107.*u", 7, -168, 2003619509u));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%---130.58X%173.67s%-181.87u%-30c", 1925387529u, "|0py&+BlK7]j3X\vDK", 282509935u, -111));
	printf(" --- Return : %d\n", ft_printf("%---130.58X%173.67s%-181.87u%-30c", 1925387529u, "|0py&+BlK7]j3X\vDK", 282509935u, -111));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%--3.115X%-*.*%%58c%-117.63u%---78p", 3653275853u, 81, -117, 10, 958058058u, (void *)8835148381236382049lu));
	printf(" --- Return : %d\n", ft_printf("%--3.115X%-*.*%%58c%-117.63u%---78p", 3653275853u, 81, -117, 10, 958058058u, (void *)8835148381236382049lu));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%-69.27%%--*p", -94, (void *)7045295314441527752lu));
	printf(" --- Return : %d\n", ft_printf("%-69.27%%--*p", -94, (void *)7045295314441527752lu));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%--81.*%%019.14%%---27c%-75.150d%00136.74x", 70, -15, -128722927, 4090510000u));
	printf(" --- Return : %d\n", ft_printf("%--81.*%%019.14%%---27c%-75.150d%00136.74x", 70, -15, -128722927, 4090510000u));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%--85.97%%---129c", 33));
	printf(" --- Return : %d\n", ft_printf("%--85.97%%---129c", 33));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%29p%0151.162x%---53.46u%-139.26X", (void *)17894711340605174765lu, 1565093748u, 662758369u, 3536629372u));
	printf(" --- Return : %d\n", ft_printf("%29p%0151.162x%---53.46u%-139.26X", (void *)17894711340605174765lu, 1565093748u, 662758369u, 3536629372u));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%--*X%-88.73i", -14, 2096742096u, 754878051));
	printf(" --- Return : %d\n", ft_printf("%--*X%-88.73i", -14, 2096742096u, 754878051));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%-10.123X%---155.97x", 382459494u, 970578181u));
	printf(" --- Return : %d\n", ft_printf("%-10.123X%---155.97x", 382459494u, 970578181u));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%-66p%-90c%--*.69x%0045.*u", (void *)9420165689360028937lu, -29, -122, 174318236u, -127, 2553740548u));
	printf(" --- Return : %d\n", ft_printf("%-66p%-90c%--*.69x%0045.*u", (void *)9420165689360028937lu, -29, -122, 174318236u, -127, 2553740548u));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%0110.7u%-85.40X%---182.30s", 1517824905u, 3044934856u, ".iM8/ct)(S"));
	printf(" --- Return : %d\n", ft_printf("%0110.7u%-85.40X%---182.30s", 1517824905u, 3044934856u, ".iM8/ct)(S"));
}

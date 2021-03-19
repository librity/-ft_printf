/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   guacamole_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:40:07 by mchardin          #+#    #+#             */
/*   Updated: 2021/03/18 23:09:58 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%-192.131%"));
	printf(" --- Return : %d\n", ft_printf("%-192.131%"));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%-70.193x%-140c%168c%026.51%%0125.119X", 1102840003u, -50, -17, 3721437512u));
	printf(" --- Return : %d\n", ft_printf("%-70.193x%-140c%168c%026.51%%0125.119X", 1102840003u, -50, -17, 3721437512u));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%10c%0036.99%", 9));
	printf(" --- Return : %d\n", ft_printf("%10c%0036.99%", 9));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%-*.*i%-19.119%", 158, 176, -448314345));
	printf(" --- Return : %d\n", ft_printf("%-*.*i%-19.119%", 158, 176, -448314345));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%-75.38s%-148.135s%00156.106i%-*.105%", "q;&kDMa}NfJoOp\\luHJ", NULL, 1930062644, 105));
	printf(" --- Return : %d\n", ft_printf("%-75.38s%-148.135s%00156.106i%-*.105%", "q;&kDMa}NfJoOp\\luHJ", NULL, 1930062644, 105));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%-50c%-85.157%%--58.188X", 9, 274691972u));
	printf(" --- Return : %d\n", ft_printf("%-50c%-85.157%%--58.188X", 9, 274691972u));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%64p%038.87d%23c%--182.49i%--76.110%", (void *)10278319775164267212lu, -1550079501, 30, -862355787));
	printf(" --- Return : %d\n", ft_printf("%64p%038.87d%23c%--182.49i%--76.110%", (void *)10278319775164267212lu, -1550079501, 30, -862355787));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%-149.*%%-114.120i%0*.24%%--*.28d", -63, 1318471055, -125, -68, -1205906582));
	printf(" --- Return : %d\n", ft_printf("%-149.*%%-114.120i%0*.24%%--*.28d", -63, 1318471055, -125, -68, -1205906582));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%-102p%-91p%00*.32%", (void *)17383623580121946936lu, (void *)6825043625903153404lu, -125));
	printf(" --- Return : %d\n", ft_printf("%-102p%-91p%00*.32%", (void *)17383623580121946936lu, (void *)6825043625903153404lu, -125));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%-132.186x%00129.46%%-191.181X%-75.123d%0033.123u", 2222238685u, 3146675666u, 251185067, 3453417465u));
	printf(" --- Return : %d\n", ft_printf("%-132.186x%00129.46%%-191.181X%-75.123d%0033.123u", 2222238685u, 3146675666u, 251185067, 3453417465u));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%--198.101X%0145.12%%172c", 935976394u, -118));
	printf(" --- Return : %d\n", ft_printf("%--198.101X%0145.12%%172c", 935976394u, -118));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%-69.27%%--*p", -94, (void *)7045295314441527752lu));
	printf(" --- Return : %d\n", ft_printf("%-69.27%%--*p", -94, (void *)7045295314441527752lu));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%--110.93x%--78.123s%--30.92X%-45.57%%-*.68s", 218095759u, "lCyN\r", 1729010453u, 134, "OxhROR`$;.U*;0zEm>e\r"));
	printf(" --- Return : %d\n", ft_printf("%--110.93x%--78.123s%--30.92X%-45.57%%-*.68s", 218095759u, "lCyN\r", 1729010453u, 134, "OxhROR`$;.U*;0zEm>e\r"));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%000169.50u%-127.85%%--195p%-51.49s%-160p", 2209242471u, (void *)8769599610347160825lu, "1+6UGQiBr8wAmIE*{,xBrju#}s=X", (void *)15118044339110535138lu));
	printf(" --- Return : %d\n", ft_printf("%000169.50u%-127.85%%--195p%-51.49s%-160p", 2209242471u, (void *)8769599610347160825lu, "1+6UGQiBr8wAmIE*{,xBrju#}s=X", (void *)15118044339110535138lu));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%-82.43i%-*.82%%-*.20X", -1945174241, -26, 94, 1446072230u));
	printf(" --- Return : %d\n", ft_printf("%-82.43i%-*.82%%-*.20X", -1945174241, -26, 94, 1446072230u));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%-110.159i%c%0100.177x%-188.*%", 646185978, 14, 3198690061u, 123));
	printf(" --- Return : %d\n", ft_printf("%-110.159i%c%0100.177x%-188.*%", 646185978, 14, 3198690061u, 123));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%--81.*%%019.14%%---27c%-75.150d%00136.74x", 70, -15, -128722927, 4090510000u));
	printf(" --- Return : %d\n", ft_printf("%--81.*%%019.14%%---27c%-75.150d%00136.74x", 70, -15, -128722927, 4090510000u));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%52c%00040.166%%-131c%-12.99s", -57, 123, "k\r/ULCoKi0"));
	printf(" --- Return : %d\n", ft_printf("%52c%00040.166%%-131c%-12.99s", -57, 123, "k\r/ULCoKi0"));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%--140.*d%-169.198X%-*.93%", -176, 2043379162, 1756246551u, 32));
	printf(" --- Return : %d\n", ft_printf("%--140.*d%-169.198X%-*.93%", -176, 2043379162, 1756246551u, 32));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%-70.21i%-*.115s%--57.196%%83.157s", 502357737, 80, "D5*;&'q|R:2T>", "S}Vl41s`R:E_p>$R.\f9N"));
	printf(" --- Return : %d\n", ft_printf("%-70.21i%-*.115s%--57.196%%83.157s", 502357737, 80, "D5*;&'q|R:2T>", "S}Vl41s`R:E_p>$R.\f9N"));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%-175.96%%-153.x", 822360617u));
	printf(" --- Return : %d\n", ft_printf("%-175.96%%-153.x", 822360617u));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%043.165%%--35.34s%--4.*d%-189.*i", "TSvqw0m:$c!hhK(,R*", -100, 967600936, 45, 1272776825));
	printf(" --- Return : %d\n", ft_printf("%043.165%%--35.34s%--4.*d%-189.*i", "TSvqw0m:$c!hhK(,R*", -100, 967600936, 45, 1272776825));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%-166.180X%--18.47d%---111.87%%8p%0114.24X", 1637127682u, -1931431309, (void *)3522468094256045905lu, 4291674618u));
	printf(" --- Return : %d\n", ft_printf("%-166.180X%--18.47d%---111.87%%8p%0114.24X", 1637127682u, -1931431309, (void *)3522468094256045905lu, 4291674618u));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%-55.46%%--171.99s%--56.41X%-173X", "7", 3917830995u, 3557113666u));
	printf(" --- Return : %d\n", ft_printf("%-55.46%%--171.99s%--56.41X%-173X", "7", 3917830995u, 3557113666u));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%--85.97%%---129c", 33));
	printf(" --- Return : %d\n", ft_printf("%--85.97%%---129c", 33));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%--150.*d%01.172i%--151.122d%--*.110x%--23.182%", 193, -1523409169, 453642614, 881460015, 68, 2920216226u));
	printf(" --- Return : %d\n", ft_printf("%--150.*d%01.172i%--151.122d%--*.110x%--23.182%", 193, -1523409169, 453642614, 881460015, 68, 2920216226u));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%00142.67d%-87.120s%-21.160%%-*.98d%-105.71d", 1277409698, "/]>n?I^K$-", -187, -569482950, 1801496736));
	printf(" --- Return : %d\n", ft_printf("%00142.67d%-87.120s%-21.160%%-*.98d%-105.71d", 1277409698, "/]>n?I^K$-", -187, -569482950, 1801496736));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%-58.131%"));
	printf(" --- Return : %d\n", ft_printf("%-58.131%"));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%.p", NULL));
	printf(" --- Return : %d\n", ft_printf("%.p", NULL));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%.p", NULL));
	printf(" --- Return : %d\n", ft_printf("%.p", NULL));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%1.p", NULL));
	printf(" --- Return : %d\n", ft_printf("%1.p", NULL));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%1.p", NULL));
	printf(" --- Return : %d\n", ft_printf("%1.p", NULL));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%5.p", NULL));
	printf(" --- Return : %d\n", ft_printf("%5.p", NULL));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("%5.p", NULL));
	printf(" --- Return : %d\n", ft_printf("%5.p", NULL));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("-->|%-16.p|<-- ", NULL));
	printf(" --- Return : %d\n", ft_printf("-->|%-16.p|<-- ", NULL));

	printf("\n--------------\n");
	printf(" --- Return : %d\n", printf("-->|%-16.p|<-- ", NULL));
	printf(" --- Return : %d\n", ft_printf("-->|%-16.p|<-- ", NULL));
}

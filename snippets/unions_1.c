/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unions_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 02:44:29 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/05 02:47:51 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

union emp
{
	int roll;
	char nm[10];
	char city[10];
};

union foo
{
	int a; // can't use both a and b at once
	char b;
};

struct bar
{
	int a; // can use both a and b simultaneously
	char b;
};

int main(void)
{
	union emp ob2;

	ob2.roll = 101;
	printf("\nSize of Union\t %d", sizeof(ob2));
	printf("\nUnion Roll %d", ob2.roll);
	strcpy(ob2.nm, "Girfa");
	printf("\nValue Loss due to Union  %d", ob2.nm);

	union foo x;
	x.a = 3;   // OK
	x.b = 'c'; // NO! this affects the value of x.a!
	printf("\nunion x.a\t %d", x.a);
	printf("\nunion x.b\t %c", x.b);

	struct bar y;
	y.a = 3;   // OK
	y.b = 'c'; // OK
	printf("\nstruct y.a\t %d", y.a);
	printf("\nstruct y.b\t %c", y.b);

	return (0);
}

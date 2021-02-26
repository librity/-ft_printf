/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generic_typeof.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 02:25:37 by lpaulo-m@st       #+#    #+#             */
/*   Updated: 2021/02/26 03:13:24 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define typename(x) _Generic((x),        \
							 char        \
							 : "char",   \
							   int       \
							 : "int",    \
							   long      \
							 : "long",   \
							   double    \
							 : "double", \
							   char *    \
							 : "char *", \
							   float     \
							 : "float",  \
							   default   \
							 : "other")

int main(int argc, char *argv[])
{
	int i;
	char c;
	float f;
	long l;
	double d;
	char *cp;
	void *v;

	printf("c: %s\n", typename(c));
	printf("i: %s\n", typename(i));
	printf("f: %s\n", typename(f));
	printf("l: %s\n", typename(l));
	printf("d: %s\n", typename(d));
	printf("cp: %s\n", typename(cp));
	printf("v: %s\n", typename(v));

	assert(strcmp(typename(i), "int") == 0);
	assert(strcmp(typename(f), "float") == 0);
	assert(strcmp(typename(v), "other") == 0);

	// SHOULD ABORT
	// assert(strcmp(typename(v), "other") != 0);
}

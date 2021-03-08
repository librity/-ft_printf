/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dsad.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 22:37:00 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/07 22:38:07 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//Declaring outer and inter structures//
struct Person
{ //Main Structure//{
	char Name[500];
	int Age;
	char Gender;
	char temp; //To clear buffer//
	struct Address
	{ //Nested Structure//{
		char Apartment[500];
		char Street[500];
		char City[100];
		char State[100];
		int Zipcode;
	} a[20]; //Nested Structure Variable//
} p[20];	 //Main Structure Variable//

void main()
{
	//Declaring variable for For loop//
	int i;
	//Reading User I/p//
	for (i = 1; i < 3; i++) //Declaring function to accept 2 people's data//{
		printf("Enter the Name of person %d : ", i);
	gets(p[i].Name);
	printf("Enter the Age of person %d : ", i);
	scanf("%d", &p[i].Age);
	scanf("%c", &p[i].temp); //Clearing Buffer//
	printf("Enter the Gender of person %d : ", i);
	scanf("%c", &p[i].Gender);
	scanf("%c", &p[i].temp); //Clearing Buffer//
	printf("Enter the City of person %d : ", i);
	gets(p[i].a[i].City);
	printf("Enter the State of person %d : ", i);
	gets(p[i].a[i].State);
	printf("Enter the Zip Code of person %d : ", i);
	scanf("%d", &p[i].a[i].Zipcode);
	scanf("%c", &p[i].temp); //Clearing Buffer//
	for (i = 1; i < 3; i++)
	{
		printf("The Name of person %d is : %s\n", i, p[i].Name);
		printf("The Age of person %d is : %d\n", i, p[i].Age);
		printf("The Gender of person %d is : %c\n", i, p[i].Gender);
		printf("The City of person %d is : %s\n", i, p[i].a[i].City);
		printf("The State of person %d is : %s\n", i, p[i].a[i].State);
		printf("The Zip code of person %d is : %d\n", i, p[i].a[i].Zipcode);
	}
}

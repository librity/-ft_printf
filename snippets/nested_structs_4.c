/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nested_structs_4.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 22:44:33 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/07 22:44:59 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct person
{
	char name[20];
	int age;
	char dob[10];
};

struct student
{
	struct person info;
	int roll_no;
	float marks;
};

int main()
{
	struct student p1;
	printf("Details of student: \n\n");
	printf("Enter name: ");
	scanf("%s", p1.info.name);
	printf("Enter age: ");
	scanf("%d", &p1.info.age);
	printf("Enter dob: ");
	scanf("%s", p1.info.dob);
	printf("Enter roll no: ");
	scanf("%d", &p1.roll_no);
	printf("Enter marks: ");
	scanf("%f", &p1.marks);
	printf("\n.......................\n\n");
	printf("Name: %s\n", p1.info.name);
	printf("Age: %d\n", p1.info.age);
	printf("DOB: %s\n", p1.info.dob);
	printf("Roll no: %d\n", p1.roll_no);
	printf("Marks: %.2f\n", p1.marks);
	return 0;
}

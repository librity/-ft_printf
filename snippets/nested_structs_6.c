/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nested_structs_5 copy.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 22:45:36 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/07 22:48:58 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

struct student_college_detail
{
	int college_id;
	char college_name[50];
};

struct student_detail
{
	int id;
	char name[20];
	float percentage;
	// structure within structure
	struct student_college_detail clg_data;
} stu_data, *stu_data_ptr;

int main()
{
	struct student_detail stu_data = {1, "Raju", 90.5, 71145,
									  "Anna University"};
	stu_data_ptr = &stu_data;

	printf(" Id is: %d \n", stu_data_ptr->id);
	printf(" Name is: %s \n", stu_data_ptr->name);
	printf(" Percentage is: %f \n\n",
		   stu_data_ptr->percentage);

	printf(" College Id is: %d \n",
		   stu_data_ptr->clg_data.college_id);
	printf(" College Name is: %s \n",
		   stu_data_ptr->clg_data.college_name);

	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 03:02:26 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/05 03:09:30 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Program to add two distances (feet-inch)
#include <stdio.h>

struct Distance
{
	int feet;
	float inch;
} dist1, dist2, sum;

int main()
{
	printf("1st distance\n");
	printf("Enter feet: ");
	scanf("%d", &dist1.feet);
	printf("Enter inch: ");
	scanf("%f", &dist1.inch);

	printf("2nd distance\n");
	printf("Enter feet: ");
	scanf("%d", &dist2.feet);
	printf("Enter inch: ");
	scanf("%f", &dist2.inch);

	// adding feet
	sum.feet = dist1.feet + dist2.feet;
	// adding inches
	sum.inch = dist1.inch + dist2.inch;

	// changing to feet if inch is greater than 12
	while (sum.inch >= 12)
	{
		++sum.feet;
		sum.inch = sum.inch - 12;
	}

	printf("Sum of distances = %d\'-%.1f\"", sum.feet, sum.inch);
	return 0;
}

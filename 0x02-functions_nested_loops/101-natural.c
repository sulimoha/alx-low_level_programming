#include "main.h"
#include <stdio.h>
/**
 * sum_natural_numbers - entry point
 * @void: void
 *
 * Return: computes and prints the sum of all the multiples of
 * 3 or 5 below 1024 (excluded)
 */

void sum_natural_numbers(void)
{
	int i;
	int sum = 0;

	for (i = 0, i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 = 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
}

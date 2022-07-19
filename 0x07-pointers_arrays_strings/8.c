#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - prints the sum of the two diagonals of a square
 matrix of integers
 * @a : int
 * @size : size
 * Return: void
*/
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j;
	int k;
	int sum1 = 0;
	int sum2 = 0;

	while (a[i][size])
	{
		i++;
	}
	for (k = 0; k < i; k++)
	{
		for (j = 0; j < size; j++)
		{
			while (k == j)
			{
				sum1 = sum1 + a[k][j];
			}
			sum2 = sum2 + a[k][size - j - 1];
		}
	}
	printf("%d ,%d\n", sum1, sum2);
}

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
	int k;
	int sum1 = 0;
	int sum2 = 0;

	for (k = 0; k < size; k++)
	{
		sum1 = sum1 + a[(size + 1) * k];
		sum2 = sum2 + a[(size - 1) * (k + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}

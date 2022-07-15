#include "main.h"
#include <stdio.h>
/**
 *reverse_array - reverses the content of an array of integers
 * @a : a pointer to a
 * @n : n
 *
 * Return: void
*/
void reverse_array(int *a, int n)
{
	int j = 0;
	int temp;

	for (j = 0; j < n / 2; j++)
	{
		temp = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] = temp;
	}
}

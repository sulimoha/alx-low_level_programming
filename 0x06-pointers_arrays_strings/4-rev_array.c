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
	int i = 0;
	int j = 0;
	int temp;

	while (a[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i / 2; j++)
	{
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
	}
}

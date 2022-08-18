#include "main.h"
/**
 * set_bit - a function that returns the value of a bit at a given index.
 * @n: number to be modified
 * @index: the index, starting from 0 of the bit you want to set
 *
 *Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;


	if (index > 8 * sizeof(unsigned long int))
	{
		return (-1);
	}
	if (*n == (*n | (1 << index)))
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}

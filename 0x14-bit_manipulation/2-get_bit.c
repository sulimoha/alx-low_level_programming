#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: number to be printed in binary
 * @index: is the index, starting from 0 of the bit you want to get
 *
 *Return: the value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	while (n)
	{
		if (index == i)
		{
			if (n % 2)
			{
				return (1);
			}
			else
			{
				return (0);
			}
		}
		n = n / 2;
		i++;
	}
	if (i < index && index < 63)
	{
		return (0);
	}
	return (-1);
}

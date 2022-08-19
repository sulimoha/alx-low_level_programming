#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you
 * would need to flip to get from one number to another
 * @n: number to be modified
 * @m: number to be flipped to
 *
 *Return: 1 if it worked, or -1 if an error occurred
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int f;

	f = n ^ m;
	while (f)
	{
		if (f & 1)
		{
			count++;
		}
		f >>= 1;
	}
	return (count);
}

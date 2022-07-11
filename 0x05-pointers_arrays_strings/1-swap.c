#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a : a pointer to a
 * @b : a pinter to bswap_int
 *
 * Return : void
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

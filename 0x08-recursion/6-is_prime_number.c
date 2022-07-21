#include "main.h"
/**
 *is_prime_number - returns 1 if the input integer
 *is a prime number, otherwise return 0.
 * @n : a number
 *
 * Return: int
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % 1 == 0 && n % n == 0)
	{
		return (1);
	}
	return (0);
}

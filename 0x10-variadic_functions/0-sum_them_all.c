#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 *sum_them_all - returns the sum of all its parameters.
 *@n : number of remaining paramters
 *
 * Return: returns the sum of all its parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);	/* Initialize the argument list. */
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, int);	/* Get the next argument value. */
	}
	va_end(ap);	/* Clean up. */
	return (sum);
}

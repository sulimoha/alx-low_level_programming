#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator : is the string to be printed between numbers
 * @n : is the number of integers passed to the function
 *
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);	/* Initialize the argument list. */
	for (i = 0; i < n - 1; i++)
	{
		/* Get the next argument value. */
		printf("%d", va_arg(ap, int));
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	/* Get the next argument value. */
	printf("%d\n", va_arg(ap, int));
	va_end(ap);	/* Clean up. */
}

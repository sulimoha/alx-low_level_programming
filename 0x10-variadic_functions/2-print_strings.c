#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator : is the string to be printed between the strings
 * @n : is the number of strings passed to the function
 *
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list sap;
	unsigned int i;
	char *s;

	if (n > 0)
	{
		va_start(sap, n);
	}
	for (i = 0; i < n; i++)
	{
		s = va_arg(sap, char *);
		if (s != NULL)
		{
			/* Get the next argument value. */
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(sap);
}

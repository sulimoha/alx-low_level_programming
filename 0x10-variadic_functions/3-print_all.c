#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Prints anything
 * @format: is a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	t_a type_of_args[] = {
		{"c", _print_char},
		{"i", _print_int},
		{"f", _print_f},
		{"s", _print_s}
	};
	unsigned int i = 0, j = 0;
	char *separator = "";
	va_start(args, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *type_of_args[j].t)
			{
				type_of_args[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
/**
 * _print_char - Prints a char
 * @separator: The separator to be printed between the characters
 * @args: A list of variadic arguments
 *
 * Return: void
 */
void _print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}
/**
 * _print_int - Prints integers
 * @separator: The separator to be printed between the integers
 * @args: A list of variadic arguments
 *
 * Return: void
 */
void _print_int(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}
/**
 * _print_f - Prints float
 * @separator: The separator to be printed between the float numbers
 * @args: A list of variadic arguments
 *
 * Return: void
 */
void _print_f(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}
/**
 * _print_s - Prints a string
 * @separator: The separator to be printed between the strings
 * @args: A list of variadic arguments
 *
 * Return: void
 */
void _print_s(char *separator, va_list args)
{
	char *arg = va_arg(args, char *);
	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}
	printf("%s%s", separator, arg);
}

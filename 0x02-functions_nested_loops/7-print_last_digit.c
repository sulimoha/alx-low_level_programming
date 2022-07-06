#include "main.h"
/**
 * print_last_digit- entry point
 * @n: input int
 *
 * Return: value of last digit
*/

int print_last_digit(int n)
{
	int d = n % 10;
	_putchar('0' + d);
	return (d);
}

#include "main.h"
#include <stdlib.h>
/**
 *mul - creates an array of integers
 *@num1 : smin value in the array
 *@num2 : max value in the array
 *
 * Return: void
*/
void mul(int num1, int num2)
{
	int r;

	if (num1 == NULL || num2 == NULL)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	if (!isdigit(num1) || !isdigit(num2))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	r = num1 * num2;
	_putchar(
}

#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: int
 *
 * Return: prints natural numbers
 */

void print_to_98(int n)
{
	int i = n;

	for (i = n; i <= 98; i++)
	{
		printf(i);
		if (i != 98)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}

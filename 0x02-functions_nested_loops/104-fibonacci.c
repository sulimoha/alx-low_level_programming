#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @void: void
 *
 * Return: prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 */

int main(void)
{
	long int i;
	long double f_2 = 0;
	long double f_1 = 1;
	long double fi = 0;

	for (i = 0; i < 98; i++)
	{
		fi = f_2 + f_1;
		f_2 = f_1;
		f_1 = fi;
		if (i == 97)
		{
			printf("%g\n", fi);
		}
		else
		{
			printf("%g, ", fi);
		}
	}
	return (0);
}

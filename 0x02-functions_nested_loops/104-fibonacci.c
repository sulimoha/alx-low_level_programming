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
	double f_2 = 0;
	double f_1 = 1;
	double fi = 0;

	for (i = 0; i < 98; i++)
	{
		fi = f_2 + f_1;
		f_2 = f_1;
		f_1 = fi;
		if (i == 97)
		{
			printf("%f.0\n", fi);
		}
		else
		{
			printf("%f.0, ", fi);
		}
	}
	return (0);
}

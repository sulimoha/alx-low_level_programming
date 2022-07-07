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
	long int f_2 = 1;
	long int f_1 = 2;
	long int fi = 0;

	for (i = 0; i < 98; i++)
	{
		fi = f_2 + f_1;
		f_2 = f_1;
		f_1 = fi;
		if (i == 97)
		{
			printf("%li\n", fi);
		}
		else
		{
			printf("%li, ", fi);
		}
	}
	return (0);
}

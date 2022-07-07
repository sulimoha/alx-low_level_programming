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
	long int f_2 = 0;
	long int f_1 = 1;
	long int fi = 0;

	printf("%li\n", f_2);
	printf("%li\n", f_1);
	for (i = 2; i < 50; i++)
	{
		fi = f_2 + f_1;
		f_2 = f_1;
		f_1 = fi;
		printf("%li\n", fi);
	}
	return (0);
}

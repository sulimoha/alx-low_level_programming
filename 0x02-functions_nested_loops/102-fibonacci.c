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
	int f0 = 0;
	int f1 = 1;
	int fi = 0;

	printf("%d\n", f0);
	printf("%d\n", f1);
	for (i = 2; i < 50; i++)
	{
			fi = fi + f0 +f1;
			printf("%d\n", fi);
	}
	return (0);
}

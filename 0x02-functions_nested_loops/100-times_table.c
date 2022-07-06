#include "main.h"
#include <stdio.h>
/**
 * print_times_table- entry point
 * @n: int
 *
 * Return: times_table
 */

void print_times_table(int n)
{
	int i;
	int j;
	int p;

	if (n == 0)
	{
		printf("0\n");
	}
	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				p = i * j;
				if (j == 0)
				{
					printf("%d", p);
				}
				else if (p < 10)
				{
					printf("   %d", p);
				}
				else if (p < 100)
				{
					printf("  %d", p);
				}
				else
				{
					printf(" %d", p);
				}
				if (j != n)
				{
					printf(",");
				}
			}
			printf("\n");
		}
	}
}

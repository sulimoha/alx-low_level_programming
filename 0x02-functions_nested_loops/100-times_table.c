#include "main.h"
#include <stdio.h>
/**
 * times_table- entry point
 * @void: void
 *
 * Return: times_table
 */

void print_times_table(int n)
{
	int i;
	int j;
	int p;

	if (n < 15 || n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				p = i * j;
				if (p < 10)
				{
					if (j == 0)
					{
						printf("%d", p);
					}
					else
					{
						printf("   %d", p);
					}
					if (j != n)
					{
						printf(",");
					}
				}
				else if (p < 100)
				{
					printf("  %d", p);
					if (j != n)
					{
						printf(",");
					}
				}
				else
				{
					printf(" %d", p);
					if (j != n)
					{
						printf(",");
					}
				}
			}
			printf("\n");
		}
	}
}

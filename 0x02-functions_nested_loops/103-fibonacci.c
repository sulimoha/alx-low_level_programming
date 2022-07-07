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
	long int f_1 = 0;
	long int fi = 0;
	long int sum = 0;

	for (i = 0; i < 50; i++)
	{
		fi = f_2 + f_1;
		f_2 = f_1;
		f_1 = fi;
		if (fi % 2)
		{
			if (fi > 4000000)
			{
				break;
			}
			else
			{
				sum = sum + fi;
			}
		}
	}
	printf("%li\n", sum);
	return (0);
}

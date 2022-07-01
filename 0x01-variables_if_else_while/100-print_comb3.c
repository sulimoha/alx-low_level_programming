#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *main - main
 *
 * Return: 0
*/
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '1'; j <= '9'; j++)
		{
			if (i != j)
			{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
			}
		}
		putchar('\n');
	}
	return (0);
}

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
	int k;
	int l;
	int a;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			a = j + 1;
			for (k = '0'; k <= '9'; k++)
			{
				for (l = (char)a; l <= '9'; l++)
				{
					if ((i == j && j == l && l == k)
							|| (i == k && j == l))
					{
						continue;
					}
					else
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

#include "main.h"
/**
 * times_table- entry point
 * @void: void
 *
 * Return: times_table
 */

void times_table(void)
{
	int i;
	int j;
	int p;
	int w;
	int r;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			p = i * j;
			r = p % 10;
			w = p / 10;
			if (p <= 9)
			{
				if (j > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(p + '0');
				if (j == 9)
				{
					continue;
				}
				else
				{
					_putchar(',');
				}
			}
			else
			{
				_putchar(' ');
				_putchar(w + '0');
				_putchar(r + '0');
				if (j == 9)
				{
					continue;
				}
				else
				{
					_putchar(',');
				}
			}

		}
		_putchar('\n');
	}
}

#include "main.h"
/**
 * jack_bauer- entry point
 * @void: void
 *
 * Return: prints every minute of the day of Jack Bauer, starting from 00:00
 * to 23:59.
 */

void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= 23; i++)
	{
		if (i < 10 )
		{
			_putchar('0' + i);
		}
		else
		{
			_putchar(i);
		}
		for (j = 0; j <= 59; j++)
		{
			if (j < 10 )
			{
				_putchar('0' + j);
			}
			else 
			{
				_putchar(j);
				_putchar('\n');
			}
		}
	}
}

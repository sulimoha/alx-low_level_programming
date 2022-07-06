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
	char i = '0';
	char j = '0';
	char k = '0';
	char l = '0';

	for (i = '0'; i <= '2'; i++)
	{
		_putchar(i);
		for (j = '0'; j <= '3'; j++)
		{
			_putchar(j);
			_putchar(':');
			for (k = '0'; k <= '5'; k++)
			{
				_putchar(k);
				for (l = '0'; l <= '9'; l++)
				{
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
}

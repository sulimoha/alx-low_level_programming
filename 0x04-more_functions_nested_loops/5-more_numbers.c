#include "main.h"
/**
 *more_numbers - print numbers
 *
 * Return:void
*/
void more_numbers(void)
{
	char num;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (num = '0'; num <= '14'; num++)
		{
			_putchar(num);
		}
		_putchar('\n');
	}
	_putchar('\n');
}

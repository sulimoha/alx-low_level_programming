#include "main.h"
/**
 *more_numbers - print numbers
 *
 * Return:void
*/
void more_numbers(void)
{
	char num = '0';
	int i;
	int j;
	int swtch = 1;
	char x;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 20; j++)
		{
			if (j <= 9)
			{
				num = j + '0';
				x = num;
			}
			else if (swtch == 1)
			{
				x = '1';
				swtch = swtch * -1;
			}
			else
			{
				x = (j / 2 - 5) + '0';
				swtch = swtch * -1;
			}
			_putchar(x);
		}
		_putchar('\n');
	}
}

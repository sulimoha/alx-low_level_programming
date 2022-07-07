#include "main.h"
/**
 *print_line - print line
 *@n:n
 * Return:void
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; n++)
	{
		if (n <= 0)
		{
			continue;
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

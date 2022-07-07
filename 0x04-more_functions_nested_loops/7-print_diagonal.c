#include "main.h"
/**
 *print_diagonal - print diagonal
 *@n:n
 * Return:void
*/
void print_diagonal(int n)
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
			_putchar('\\');
		}
	}
	_putchar('\n');
}

#include "main.h"
/**
 *print_diagonal - print diagonal
 *@n:n
 * Return:void
*/
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar(' ');
			_putchar('\\');
			_putchar(' ');
			_putchar('\n');
			for (j = 0; j < i + 1; j++)
			{
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}

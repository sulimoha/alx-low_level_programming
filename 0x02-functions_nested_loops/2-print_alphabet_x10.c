#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * @void: no parameters
 *
 * Return: 0
*/

void print_alphabet_x10(void)
{
	int n = 0;
	
	while (n < 10)
	{
		char i = 'a';
		
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		n++;
		_putchar('\n');
	}
}

#include "main.h"
/**
 * main - entry point
 * @void: no parameters
 *
 * Return: 0
*/

int main(void)
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
	return (0);
}

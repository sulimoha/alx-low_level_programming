#include "main.h"
/**
 *print_number - print number
 *@n: int number to be printed using only _putchar
 * Return:void
*/
void print_number(int n)
{
	int pow = 1;
	int a = n;
	int b = n;
	int pV = 0;
	int firstDigit;


	if (n < 10)
	{
		_putchar(n + '0');
	}
	else 
	{
		while (a >= 10)
		{
			a = a / 10;
			pV++;
		}
		for (i = 0; i < pV; i++)
		{
			pow = pow * 10;
		}
		while (b >= 10)
		{
			firstDigit = b / pow;
			_putchar(firstDigit + '0');
			b = b % pow;
			pow = pow / 10;
			if (b < 10)
			{
				_putchar(b + '0');
			}
		}
	}

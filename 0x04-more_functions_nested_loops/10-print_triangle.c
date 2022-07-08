#include "main.h"
/**
  * print_triangle - Prints a triangle of squares
  * @size: The size of the squares triangle
  *
  * Return: void
  */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 1; j--)
			{
				_putchar(' ');
			}

			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

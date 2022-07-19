#include "main.h"
/**
 *print_chessboard - prints the chessboard.
 * @a : int
 *
 * Return: void
*/
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;
	int k;
	
	while (a[i][8])
	{
		i++;
	}
	for (k = 0; k < i; k++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[k][j]);
		}
		_putchar('\n');
	}

}

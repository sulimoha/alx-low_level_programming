#include "main.h"
/**
 *  _islower - entry point
 * @void: no parameters
 *
 * Return: 1 if c is lower case and 0 if it is not
*/

int _islower(int c)
{
	int i;
	int j;

	for (i = 97; i <= 122; i++)
	{
		if ( c == i)
		{
			j = 1;
			break;
		}
		else 
		{
		j = 0;
		break;
		}
	}
	return (j);
}

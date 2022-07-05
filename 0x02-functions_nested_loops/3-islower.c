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

	for (i = 97; i <= 122; i++)
	{
		if ( c == i)
		{
			return (1);
		}
		else 
		{
			return (0);
		}
	}
}

#include "main.h"
/**
 *  _islower - entry point
 * @void: no parameters
 *
 * Return: 1 if c is lower case and 0 if it is not
*/

int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
		else 
		{
			return (0);
		}
	}
}

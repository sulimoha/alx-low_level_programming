#include "main.h"
/**
 *  _isupper - entry point
 * @c: input charachter
 *
 * Return: 1 if c is lupper case and 0 if it is not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

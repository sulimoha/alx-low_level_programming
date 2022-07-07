#include <stdio.h>
/**
 *_isupper - check if it is uppercase or not
 *
 * Return: 1 for upper and 0 for lower
*/
int _isupper(int c)
{
	char ch;

	char c = c + '0';
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
		{
		return (0);
		}
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (c == ch)
		{
			return (1);
		}
	}
}

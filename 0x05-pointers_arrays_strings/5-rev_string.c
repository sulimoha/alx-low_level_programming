#include "main.h"
#include <string.h>
/**
 * rev_string -  prints a string, in reverse, followed by a new line
 * @s : a pointer to s
 *
 * Return: void
*/
void rev_string(char *s)
{
	unsigned int long i;
	char temp;

	for (i = 0; i < (strlen(s) / 2 + 1); i++)
	{
		temp = s[strlen(s) - 1 - i];
		s[strlen(s) - 1 - i] = s[i];
		s[i] = temp;
	}
}

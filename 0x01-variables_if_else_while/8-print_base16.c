#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *main - main
 *
 * Return: 0
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		for (ch = '0'; ch <= '9'; ch++)
		{
			putchar(ch);
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

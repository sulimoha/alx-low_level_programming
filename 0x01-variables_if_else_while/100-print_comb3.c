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
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		num+= 1;
		putchar(num);
		num-= 1;
		if (num == '9')
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
		putchar('\n');
		return (0);
}

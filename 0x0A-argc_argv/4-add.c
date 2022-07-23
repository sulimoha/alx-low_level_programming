#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - the number of arguments passed into it.
 * @argc : int
 * @argv : string
 *
 * Return: 0 for success
*/
int main(int argc, char *argv[])
{
	int a;
	char *s;
	unsigned int b;
	unsigned int sum = 0;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			s = argv[a];
			for (b = 0; b < strlen(s); b++)
			{
				if (s[b] < 48 || s[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(s);
			s++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

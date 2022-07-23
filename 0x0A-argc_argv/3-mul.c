#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - the number of arguments passed into it.
 * @argc : int
 * @argv : string
 *
 * Return: 0 for success
*/
int main(int argc, char *argv[])
{
	int ar1 = 0;
	int ar2 = 0;

	if (argc == 3)
	{
		ar1 = atoi(argv[1]);
		ar2 = atoi(argv[2]);
		printf("%d\n", ar1 * ar2);
	}
	else
	{
		printf("Errot\n");
		return (1);
	}
	return (0);
}

#include "main.h"
#include <stdio.h>
/**
 * main - the number of arguments passed into it.
 * @argc : int
 * @argv : string
 *
 * Return: 0 for success
*/
int main(int argc, char *argv[])
{
	int j;
	while (j < argc )
	{
		printf("%s\n", argv[j]);
		j++
	}
	return (0);
}

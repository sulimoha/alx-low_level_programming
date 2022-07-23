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
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

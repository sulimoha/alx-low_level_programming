#include "main.h"
#include <stdio.h>
/**
 * main -   prints the program name, followed by a new line
 * @argc : int
 * @argv : string
 *
 * Return: 0 for success
*/
int main(int argc, char *argv[])
{
	int a = argc;
	a = 0;

	printf("%s\n", argv[0]);
	return (a);
}

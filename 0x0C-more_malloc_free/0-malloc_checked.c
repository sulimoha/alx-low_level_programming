#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 *malloc_checked - allocates memory using malloc
 *@b : size of the memory to be allocated
 *
 * Return: a pointer to the allocated memory, or normally
 * terminate the process with a attus
 * value of 98
*/
void *malloc_checked(unsigned int b)
{
	char *t;

	t = malloc(b);
	if (t == NULL)
	{
		exit(98);
	}
	return (t);
}

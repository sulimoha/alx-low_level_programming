#include "main.h"
#include <stdlib.h>
/**
 *_calloc - allocates memory for an array, using malloc
 *@nmemb : number of elements of an array
 *@size : size bytes of the element
 *
 * Return: a pointer to the allocated memory and sets the memory to 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *t;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	t = malloc(nmemb * size);
	if (t == NULL)
	{
		return (NULL);
	}
	return (t);
}

#include "main.h"
#include <stdlib.h>
/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr : a pointer to the memory previously allocated
 *with a call to malloc: malloc(old_size)
 *@old_size : is the size, in bytes, of the allocated space for ptr
 *@new_size : is the new size, in bytes of the new memory block
 *
 * Return: a pointer to the new allocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			free(new_ptr);
			return (NULL);
		}
	}
	if (ptr != NULL)
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		if (new_size == old_size)
		{
			return (ptr);
		}
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			free(new_ptr);
			return (NULL);
		}
		if (new_size > old_size)
		{
			free(ptr);
			return (new_ptr);
		}
		new_ptr = ptr;
		free(ptr);
		return (new_ptr);
	}
	return (new_ptr);
}

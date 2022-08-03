#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator - xecutes a function given as a parameter
 *on each element of an array
 *@array : a pointer to the array that the function action
 *need to be excuited on
 *@size : the size of the array
 *@action : is a pointer to the function you need to use
 *
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if ((void *)array != NULL && (void *)size != NULL && action != NULL)
	{
		while (size != 0)
		{
			action(array[i]);
			i++;
			size--;
		}
	}
}

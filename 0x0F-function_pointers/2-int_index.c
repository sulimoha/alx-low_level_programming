#include <stdlib.h>
#include "function_pointers.h"
/**
 *int_index - searches for an integer
 *@array : a pointer to the array that the function cmp
 *need to compare it's elements to 0
 *@size : the size of the array
 *@cmp : is a pointer to the function to be used to compare values
 *
 * Return: returns the index of the first element for which
 * the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		while (size != 0)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			i++;
			size--;
		}
	}
	return (-1);
}

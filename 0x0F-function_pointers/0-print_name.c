#include <stdlib.h>
#include "function_pointers.h"
/**
 *print_name - prints a name.
 *@name : a pointer to the name to be printed
 *@f : a pointer to the printing function
 *
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		f(name);
	}
}

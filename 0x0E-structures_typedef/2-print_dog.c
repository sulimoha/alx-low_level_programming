#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - a function that  prints a struct dog
 * @d: struct name
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (!d->age)
		{
			printf("Age: (nil)");
		}
		else
		{
			printf("Age: %f\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}

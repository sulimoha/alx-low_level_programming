#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: struct name
 * @name: name of the dog
 * @age : age of the dog
 * @owner: owner of the dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr;

	ptr = d;
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
}

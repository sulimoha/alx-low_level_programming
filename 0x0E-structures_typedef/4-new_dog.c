#include "dog.h"
#include <stdlib.h>

/**
 * new_dog- a function that creats a new dog
 * @name: name of the dog
 * @age : age of the dog
 * @owner: owner of the dog
 *
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dognew;

	dognew = malloc(sizeof(dog_t));
	if (dognew == NULL)
	{
		return (NULL);
	}
	if (name == NULL)
	{
		free(dognew);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(dognew);
		return (NULL);
	}
	dognew->name = name;
	dognew->owner = owner;
	dognew->age = age;
	return (dognew);
}

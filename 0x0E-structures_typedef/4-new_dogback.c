#include "dog.h"
#include <stdlib.h>
/**
 * new_dog- a function that creats a new dog
 * @name: name of the dog
 * @age : age of the dog
 * @owner: owner of the dog
 *
 * Return: void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *dognew;

	dognew = malloc(sizeof(struct dog_t));
	if (dognew == NULL)
	{
		return (NULL);
	}
	dognew->name = name;
	dognew->age = age;
	dognewg->owner = owner;
	return dognew;
}

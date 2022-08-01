#ifndef HEADER_H
#define HEADER_H

/**
 * struct dog - a dog struct with the follwing elements
 * @name: name of the dog
 * @age: Seage of the dog
 * @owner: owner of the dog
 *
 * Description: Longer description (unneeded for this task)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif

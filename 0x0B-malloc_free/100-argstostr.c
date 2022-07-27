#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s : a pointer to s
 *
 * Return: int len
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
	}
	return (len);
}
#include "main.h"
#include <stdlib.h>
#include <limits.h>

int _strlen(char *s);
/**
 *argstostr - concatenates all the arguments of your program.
 *@ac : arguments count
 *@av : arguments values
 *
 * Return: concatenates all the arguments of your program
*/
char *argstostr(int ac, char **av)
{
	char *t;
	int i = 0;
	int tlen = ac + 1;
	int a = 0;
	int k;
	int l;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		tlen = tlen + _strlen(av[i]) * sizeof(char);
	}
	t = malloc(tlen);
	if (t == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < ac; k++)
	{
		for (l = 0; l < _strlen(av[k]); l++)
		{
			t[a + l] = *av[l];
		}
		a = a + l;
		t[a + 1] = *"\n";
	}
	return (t);
}

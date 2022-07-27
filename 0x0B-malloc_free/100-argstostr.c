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
	int j = 0;
	int tlen = 0;
	int a = 0;
	int b = 0;
	int c = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i<ac)
	{
		j = 0;
		while (av[i][j])
		{
			tlen++;
			j++;
		}
		i++;
	}
	t = malloc(tlen * sizeof(char) + ac + 1);
	if (t == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (av[a])
	{
		while (av[a][b])
		{
			t[c] = av[a][b];
			c++;
			b++;
		}
		t[c] = '\n';
		b = 0;
		c++;
		a++;
	}
	c++;
	t[c] = '\0';
	return (t);
}

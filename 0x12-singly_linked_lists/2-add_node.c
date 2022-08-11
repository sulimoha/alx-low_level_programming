#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include<string.h>
/**
 *add_node - adds a new node at the beginning of a list_t list.
 * @head: head of the node
 *@str: pointer the the str to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
		{
			return (NULL);
		}
		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;
		return (temp);
	}
	return (0);
}
/**
 *_strlen - returns the length of a string
 * @str: a pointer to the string
 *
 * Return: the lenght
*/
int _strlen(const char *str)
{
	int i = 0;

	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

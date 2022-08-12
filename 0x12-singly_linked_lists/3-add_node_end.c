#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include<string.h>
/**
 *add_node_end - adds a new node at the end of a list_t list.
 * @head: head of the node
 *@str: pointer the the str to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new_node;
	int i = 0;

	if (str != NULL)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->str = strdup(str);
		while (*str)
		{
			str++;
			i++;
		}
		new_node->len = i;
		new_node->next = NULL;
		if (*head != NULL)
		{
			temp = *head;
			while (temp->next)
			{
				temp = temp->next;
			}
			temp->next = new_node;
			return (temp);
		}
		else
		{
			*head = new_node;
			return (*head);
		}
	}
	return (NULL);
}

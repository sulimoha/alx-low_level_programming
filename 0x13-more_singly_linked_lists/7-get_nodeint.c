#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the
 * nth node of a listint_t linked list.
 * @head: head of the list
 * @index: is the index of the node, starting at 0
 *
 * Return: the nth node of a listint_t linked list.if the
 * node does not exist, return NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		i++;
		head = head->next;
		if (i == index)
		{
			return (head);
		}
	}
	return (NULL);
}

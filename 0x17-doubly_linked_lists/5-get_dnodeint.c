#include "lists.h"
/**
 * get_dnodeint_at_index -  function that returns the nth node of
 * a dlistint_t linked list.
 * @head: apointer to the head of the list
 * @index: is the index of the node, starting from 0
 *
 * Return: the nth node or NULL if  the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
		{
			return (head);
		}
		else
		{
			head = head->next;
			i++;
		}
	}
	return (NULL);
}

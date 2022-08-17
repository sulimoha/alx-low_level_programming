#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at a given
 * position.
 * @head: head of the list
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0
 * @n: the value of the node to be added.
 *
 * Return: the address of the new node, or NULL if it failed.
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *temp = *head;
	listint_t *new_node;

	if (head)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		while (temp != NULL)
		{
			if (i == idx)
			{
				new_node->next = temp->next;
				new_node->n = n;
				temp->next = new_node;
				return (new_node);
			}
			i++;
			temp = temp->next;
		}
		while (*head != NULL)
		{
			if (idx == 0)
			{
				new_node->next = *head;
				new_node->n = n;
				*head = new_node;
				return (new_node);
			}
			else
			{
				return (NULL);
			}
		}

	}
	return (NULL);
}

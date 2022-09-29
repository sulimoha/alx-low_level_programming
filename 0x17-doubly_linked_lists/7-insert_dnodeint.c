#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node at
 * a given position.
 * @h: list head
 * @idx:  is the index of the list where the new node should be added.
 * Index starts at 0
 * @n: data of the inserted node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *temp;
	unsigned int i = 1;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		add_dnodeint(h, n);
	}
	new->n = n;
	temp = *h;
	while (temp)
	{
		if (i == idx)
		{
			new->next = temp->next;
			temp->next = new;
			new->prev = temp;
			return (new);
		}
		else
		{
			temp = temp->next;
			i++;
		}
	}
	if (idx == i)
	{
		add_dnodeint_end(h, n);
	}
	return (NULL);
}

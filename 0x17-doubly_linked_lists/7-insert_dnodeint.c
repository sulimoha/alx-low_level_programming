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
	dlistint_t *new, *temp;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (!h || !(*h))
		return (NULL);
	temp = *h;
	for (i = 0; temp && i < (idx - 1); i++)
		temp = temp->next;
	if (!temp)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	new->prev = temp;
	if (new->next)
	{
		new->next->prev = new;
	}
	return (new);
}

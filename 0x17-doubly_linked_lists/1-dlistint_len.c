#include "lists.h"

/**
 * dlistint_len - function that prints all returns the number
 * of elements in a list.
 * @h: a pointer to the head of the list
 *
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h)
	{
		i = 1;
		while (h->next)
		{
			h = h->next;
			i++;
		}
	}
	return (i);
}

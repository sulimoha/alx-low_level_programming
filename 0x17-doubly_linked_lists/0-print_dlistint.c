#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: a pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h)
	{
		i = 1;
		printf("%d\n", h->n);
		while (h->next)
		{
			h = h->next;
			printf("%d\n", h->n);
			i++;
		}
	}
	return (i);
}

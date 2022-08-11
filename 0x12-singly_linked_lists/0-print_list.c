#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *print_list - prints all the elements of a list_t list.
 * @h: list
 *
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t nt n_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}

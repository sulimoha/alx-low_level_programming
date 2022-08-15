#include "lists.h"

/**
 * print_listint -a function that returns the number of elements in a linked listint_t list. 
 * @h: head of the list
 *
 * Return: the number of elements in the list
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

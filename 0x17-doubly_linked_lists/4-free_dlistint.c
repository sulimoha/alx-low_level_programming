#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: a pointer to the head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *post;

	if (!head)
	{
		return;
	}
	post = head->next;
	while (head)
	{
		free(head);
		head = post;
		if (post)
		{
			post = post->next;
		}
	}
}

#include "lists.h"

/**
 * *reverse_listint - a function that reverses a listint_t linked list.
 * @head: head of the list
 *
 * Return: R pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;
	listint_t *post = NULL;

	if (head)
	{
		while (*head)
		{
			post = *head;
			*head = (*head)->next;
			post->next = pre;
			pre = post;
		}
		*head = pre;
		return (*head);
	}
	return (NULL);
}

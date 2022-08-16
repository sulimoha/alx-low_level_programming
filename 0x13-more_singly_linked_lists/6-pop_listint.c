#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked lis and returns the head node’s data (n).
 * @head: head of the list
 *
 * Return: the head node’s data (n). if the list is empty returns 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = 0;

	if (*head != NULL)
	{
		temp = (*head)->next;
		n = (*head)->n;
		*head = NULL;
		free(*head);
		*head = temp;
	}
	return (n);
}

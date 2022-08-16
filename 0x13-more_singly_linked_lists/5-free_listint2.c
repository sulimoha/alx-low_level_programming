#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * The function sets the head to NULL
 * @head: head of the list
 *
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if(head)
	{
		while (*head)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
	}
	else
	{
		return;
	}
	*head = NULL;
	free(*head);
}

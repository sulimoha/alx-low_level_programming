#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of
 * a dlistint_t list.
 * @head: a pointer to a pointer to the list head
 * @n : new node data
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!head || !(*head))
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp && temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
		new->prev = temp;
		new->next = NULL;
	}
	return (new);
}

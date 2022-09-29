#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of
 * a dlistint_t list.
 * @head: a pointer to the pointer to the head of the list
 * @n: data of the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	if (head && *head)
	{
		(*head)->prev = new;
		new->next = *head;
	}
	if (head)
	{

		*head = new;
	}
	return (*head);
}

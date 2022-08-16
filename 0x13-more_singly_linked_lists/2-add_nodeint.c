#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of
 * a listint_t list.
 * @head: head of the list
 * @n: node value to be added
 *
 * Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}

#include "lists.h"

/**
 * delete_dnodeint_at_index -  deletes the node at index index of
 * a dlistint_t linked list.
 * @head: head of the list
 * @index: of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (!head || !(*head))
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		if (temp)
		{
			temp->prev = NULL;
		}
		*head = temp;
	}
	else
	{
		temp = *head;
		for (i = 0; temp && i < index; i++)
		{
			temp = temp->next;
		}
		if (!temp)
		{
			return (-1);
		}
		temp->prev->next = temp->next;
		if (temp->next)
		{
			temp->next->prev = temp->prev;
		}
		free(temp);
	}
	return (1);
}

#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index index of
 * a listint_t linked list.
 * @head: head of the list
 * @index: the index of the node the should be deleted.
 * Index starts at 0
 *
 * Return: Returns: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *temp = *head;
	listint_t *current_node;

	if (!(*head))
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (i == index)
		{
			current_node = temp->next;
			temp->next = current_node->next;
			free(current_node);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}

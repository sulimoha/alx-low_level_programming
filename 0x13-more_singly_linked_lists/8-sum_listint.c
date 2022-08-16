#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: head of the list
 *
 * Return: theum of all the data (n) of a listint_t linked list.
 * if the list is empty, return 0
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}

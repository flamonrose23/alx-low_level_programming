#include "lists.h"

/**
 * sum_dlistint - returning sum of data of the list
 * @head: pointing to first element
 * Return: sum of data or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (!head)
		return (0);
	while (current->next)
	{
		sum += current->n;
		current = current->next;
	}
	sum += current->n;
	return (sum);
}

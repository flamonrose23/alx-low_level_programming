#include "lists.h"

/**
 * get_dnodeint_at_index - returning nth node of the list
 * @head: pointing to first element
 * @index: nth node
 * Return: node and Null if node doesnt exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *current = head;

	while (n < index)
	{
		current = current->next;
		if (!current)
			return (NULL);
		n++;
	}

	return (current);
}

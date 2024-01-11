#include "lists.h"

/**
 * print_dlistint - printing data of linked list
 * @h: pointer to list
 * Return: number of nodes in linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

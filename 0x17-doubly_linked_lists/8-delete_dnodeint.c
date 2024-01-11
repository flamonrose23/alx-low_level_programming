#include "lists.h"

/**
 * delete_dnodeint_at_index - deleting the node at index of the list
 * @head: pointing to first element
 * @index: position of node to delete
 * Return: 1 on success and -1 on error
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *p = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(p);
		return (1);
	}
	while (p != NULL && x < index)
	{
		p = p->next;
		x++;
	}
	if (p == NULL)
	{
		return (-1);
	}
	p->prev->next = p->next;

	if (p->next != NULL)
	{
		p->next->prev = p->prev;
	}
	free(p);
	return (1);
}

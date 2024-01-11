#include "lists.h"

/**
 * insert_dnodeint_at_index - inserting new node at given position
 * in the list
 * @h: pointing to first element
 * @idx: position to add node
 * @n: data
 * Return: address of new node or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *p = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = new_node;
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	while (p != NULL && i < idx - 1)
	{
		p = p->next;
		i++;
	}
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	new_node->prev = p;
	new_node->next = p->next;
	if (p->next != NULL)
	{
		p->next->prev = new_node;
	}
	p->next = new_node;
	return (new_node);
}

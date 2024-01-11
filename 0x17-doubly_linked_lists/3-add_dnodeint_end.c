#include "lists.h"

/**
 * add_dnodeint_end - adding node in end of the list
 * @head: pointing to first element
 * @n: data
 * Return: address of new element or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (!*head)
		*head = new;
	else
	{
		while (current->next)
			current = current->next;
		current->next = new;
		new->prev = current;
	}
	return (new);
}

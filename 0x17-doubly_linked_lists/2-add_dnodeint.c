#include "lists.h"

/**
 * add_dnodeint - adding node at beginning of dlistint_t list
 * @head: pointing to first element
 * @n: data
 * Return: adress of new element or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}

#include "lists.h"

/**
 * everse_listint - reversing the list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = next;
	}

	*head = p;

	return (*head);
}

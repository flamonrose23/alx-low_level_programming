#include "lists.h"

/**
 * delete_nodeint_at_index - deleting a node in the list at the index
 * @head: pointer to the first element in the list
 * @index: index of node to delete
 *
 * Return: 1 (Success) or -1 (Fail)
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *cur = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (x < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		x++;
	}


	cur = tmp->next;
	tmp->next = cur->next;
	free(cur);

	return (1);
}

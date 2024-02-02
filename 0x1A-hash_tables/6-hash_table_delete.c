#include "hash_tables.h"

/**
 * hash_table_delete - writing function that deletes a ht
 * @ht: meaning the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *current_node, *tmp;

	if (!ht)
		return;
	for (x = 0; x < ht->size; x++)
	{
		current_node = ht->array[x];
		while (current_node)
		{
			tmp = current_node;
			free(current_node->key);
			free(current_node->value);
			free(current_node);
			current_node = tmp->next;
		}
	}
	free(ht->array);
	free(ht);
}

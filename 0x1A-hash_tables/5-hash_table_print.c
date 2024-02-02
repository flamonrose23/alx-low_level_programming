#include "hash_tables.h"

/**
 * hash_table_print - writing function that prints ht
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_node;
	int flag_is = 0;
	unsigned long int x;

	if (!ht)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		current_node = ht->array[x];
		while (current_node)
		{
			if (flag_is)
				printf(", ");
			printf("'%s': '%s'", current_node->key, current_node->value);
			flag_is = 1;
			current_node = current_node->next;
		}
	}
	printf("}\n");
}

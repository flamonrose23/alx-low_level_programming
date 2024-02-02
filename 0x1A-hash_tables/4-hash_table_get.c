#include "hash_tables.h"

/**
 * hash_table_get - retrieving a value with a key in ht
 * @ht: the hash table.
 * @key: pointing to the key
 *
 * Return: the value associated with the element,
 *	or NULL if key couldn’t be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current_node;
	unsigned long int indx;

	if (!ht || !key)
		return (NULL);
	indx = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[indx];
	while (current_node && strcmp(current_node->key, key))
		current_node = current_node->next;
	return (current_node ? current_node->value : NULL);
}

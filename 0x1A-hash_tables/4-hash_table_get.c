#include "hash_tables.h"

/**
 * hash_table_get - writing function that retrieves value with key
 * @ht: the hash table
 * @key: pointing to the key of ht
 *
 * Return: the value associated with the element
 * or NULL  if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key);
{
	hash_node_t *nndd;
	unsigned long int index;

	if (!ht == NULL || !key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	nndd = ht->array[index];
	while (nond && strcmp(nndd->key, key) != 0)
		nndd = nndd->next;

	return ((nndd == NULL) ? NULL : nndd->value);
}

#include "hash_tables.h"

/**
 * hash_table_set - writing function that adds an element to hash table
 * @ht: the hash table created
 * @key: is the key
 * @value: value given to the node
 * Return: 1 on success and 0 if it fails
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *node, *nndd;

	if (!ht || !key * key == '\0' || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		node = create_node(key, value);
		if (!node)
			return (0);
		ht->array[index] = node;
		return (1);
	}
	else
	{
		nndd = ht->array[index];
		while (nndd)
		{
			if (strcmp(nndd->key, key) == 0)
			{
				free(nndd->value);
				nndd->value = strdup(value);
				return (1);
			}
			nndd = nndd->next;
		}

		node = create_node(key, value);
		if (!node)
			return (0);
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}
}

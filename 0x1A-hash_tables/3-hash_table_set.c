#include "hash_tables.h"

/**
 * new_node - creatinf function adding  a new node
 * @key: is the key of the node
 * @value: value equivalent
 *
 * Return: new node given
 */

hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *tmp;

	tmp = malloc(sizeof(hash_node_t));

	if (tmp == NULL)
		return (NULL);

	tmp->key = strdup(key);
	if (tmp->key == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->value = strdup(value);
	if (tmp->value == NULL)
	{
		free(tmp->key);
		free(tmp);
		return (NULL);
	}

	tmp->next = NULL;

	return (tmp);
}
/**
 * hash_table_set - adding en element in a hash table
 * @ht: the hash table created
 * @key: key of ht
 * @value: value of the ht
 *
 * Return: 1 on success 0 if it fails
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp, *newNode;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	newNode = ht->array[index];
	while (newNode != NULL)
	{
		if (strcmp(newNode->key, key) == 0)
		{
			newNode->value = strdup(value);
			return (1);
		}
		newNode = newNode->next;
	}

	tmp = new_node(key, value);
	tmp->next = ht->array[index];
	ht->array[index] = tmp;

	return (1);
}

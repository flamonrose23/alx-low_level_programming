#include "hash_tables.h"

/**
 * hash_table_create - writing function that creates hash table
 * @size: refering to the size of the hash table created
 * Return: NULL or pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_newtable2;

	hash_newtable2 = malloc(sizeof(hash_table_t));
	if (!hash_newtable2)
		return (NULL);
	hash_newtable2->array = malloc(sizeof(hash_node_t *) * size);
	if (!hash_newtable2->array)
	{
		free(hash_newtable2);
		return (NULL);
	}
	hash_newtable2->size = size;
	return (hash_newtable2);
}

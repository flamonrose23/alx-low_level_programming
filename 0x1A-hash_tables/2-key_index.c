#include "hash_tables.h"

/**
 * key_index - writing function that gives the index of key
 * @key: the key
 * @size: size of the array of hash table created
 *
 * Return: index at which the key/value pair should be stored
 * in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

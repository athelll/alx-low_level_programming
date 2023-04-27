#include "hash_tables.h"

/**
 * key_index - finds the index based on hash in a hash table
 * Return: returns index
 *
 * @key: key n which index is being requested for
 * @size: size of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (size == 0)
		return (0);

	hash = hash_djb2(key);
	return (hash % size);
}

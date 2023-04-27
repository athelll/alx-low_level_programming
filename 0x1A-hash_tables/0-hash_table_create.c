#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * Return: returns a pointer to the hash table
 *
 * @size: initializes the size of the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));

	/** checks if table is null **/
	if (!table)
		return (NULL);

	/** check if size is null **/
	if (!size)
	{
		free(table);
		return (NULL);
	}

	table->size = size;

	/** returns pointer to new hash table **/
	return (table);
}

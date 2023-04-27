#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * Return: returns a pointer to the hash table
 *
 * @size: initializes the size of the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_node_t **nodes;
	hash_table_t *table;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);

	nodes = malloc(sizeof(*nodes) * size);

	if (!nodes)
	{
		free(table);
		return (NULL);
	}

	/** initializes all nodes to NULL **/
	while (i < size)
	{
		nodes[i] = NULL;
		i++;
	}

	table->array = nodes;
	table->size = size;

	return (table);
}

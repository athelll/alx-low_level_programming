#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get- gets value from key
 * Return: returns the value
 *
 * @ht: pointer to hashtable
 * @key: key string
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	node = ht->array[index];

	if (!node)
		return (NULL);

	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->next;

	if (!node)
		return (NULL);

	return (node->value);
}

#include "hash_tables.h"

/**
 * hash_table_delete - deletes hashtable
 * @ht: pointer to hashtable
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node, *buffer;

	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			buffer = node;
			node = node->next;
			free(buffer->key);
			free(buffer->value);
			free(buffer);
		}
		free(node);
		i++;
	}
	free(ht->array);
	free(ht);
}

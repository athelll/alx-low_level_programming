#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hashtable
 * Return: returns void
 *
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *nodes;
	char *comma = "";

	if (!ht)
		return;

	printf("{");
	while (i < ht->size)
	{
		nodes = ht->array[i];
		while (nodes)
		{
			printf("%s'%s': '%s'", comma, nodes->key, nodes->value);
			comma = ", ";
			nodes = nodes->next;
		}
		i++;
	}
	printf("}");
	printf("\n");
}

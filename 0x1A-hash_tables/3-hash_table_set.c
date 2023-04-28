#include "hash_tables.h"
#include "string.h"

/**
 * new_item - creates a new node for hash table
 * Return: returns the pointer to the new node
 *
 * @key: key of node
 * @value: value of node;
 */
hash_node_t *new_item(const char *key, const char *value)
{
	hash_node_t *new = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (!new)
		return (NULL);

	new->key = strdup(key);
	new->value = strdup(value);

	if (!(new->key) || !(new->value))
	{
		free(new->key);
		free(new->value);
		free(new);
		return (NULL);
	}

	return (new);
}

/**
 * hash_table_set - initializes a hash table with nodes
 * Return: 1 on success, 0 on failure
 *
 * @ht: pointer to hashtable
 * @key: key string
 * @value: value string
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned int index;

	if (!ht || !(ht->array) || strlen(key) == 0 || !value || !key)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);

	if (ht->array[index] == NULL)
	{
		new = new_item(key, value);
		if (new == NULL)
			return (0);

		ht->array[index] = new;
		ht->array[index]->next = NULL;
		return (1);
	}
	else
	{
		hash_node_t *old = ht->array[index];

		while (old != NULL && strcmp(old->key, key) != 0)
			old = old->next;

		if (old == NULL)
		{
			new = new_item(key, value);
			if (new == NULL)
				return (0);

			new->next = ht->array[index];
			ht->array[index] = new;
			return (1);
		}
		else
		{
			free(old->value);
			old->value = strdup(value);
			if (!(old->value))
				return (0);
			return (1);
		}
	}
}

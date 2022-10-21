#include "lists.h"
#include <string.h>

/**
  * add_node_end - adds a node to the end of a list
  * @head: head pointer
  * @str: string
  * Return: returns an address to the new node
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (str == NULL || strdup(str) == NULL)
		return (NULL);

	new->str = strdup(str);
	new->next = NULL;
	new->len = strlen(str);

	if (*head == NULL)
		*head = new;
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (new);
}

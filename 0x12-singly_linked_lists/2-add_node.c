#include "lists.h"
#include <string.h>

/**
  * add_node - adds node to the start of a list
  * @head: head ponter
  * @str: string
  * Return: returns address to new node
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);

	if (head == NULL)
		new->next = NULL;
	else
		new->next = *head;

	*head = new;

	return (new);
}

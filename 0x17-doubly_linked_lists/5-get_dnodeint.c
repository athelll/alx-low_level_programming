#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at specific index
 * Return: the node at index
 * @head: head pointer
 * @index: index being searched for
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	return (head);
}

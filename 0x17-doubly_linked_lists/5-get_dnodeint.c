#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at specific index
 * Return: the node at index
 * @head: head pointer
 * @index: index being searched for
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	while (index && head->next)
	{
		head = head->next;
		index--;
	}

	if (index == 0)
		return (head);

	return (NULL);
}

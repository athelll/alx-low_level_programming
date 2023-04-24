#include "lists.h"

/**
 * dlistint_len - returns length of list
 * @h : doubly linked list pointer
 * Return: returns number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}

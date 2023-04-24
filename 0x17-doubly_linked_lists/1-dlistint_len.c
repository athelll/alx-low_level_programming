#include "lists.h"

/**
 * dlistint_len - returns length of list
 * Return: returns number of elements
 * @h : doubly linked list pointer
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->n;
		nodes++;
	}

	return (nodes);
}

#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints the all
 * elemnts in a doubly linked list
 *
 * Return: retuns number of nodes
 *
 * @h : pointer to doubly linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}

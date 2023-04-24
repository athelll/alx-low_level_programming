#include "lists.h"

/**
 * free_dlistint - frees the allocated memory
 * used to define the doublyinkedlist
 *
 * Return: retuns void
 * @head: doublylinkedlist head pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *point;

	while (head)
	{
		point = head;
		head = head->next;
		free(point);
	}
}

#include "lists.h"

/**
 * sum_dlistint - sums up elements
 * in singlylinkedlist
 *
 * Return: returns sum
 * @head: head pointer
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

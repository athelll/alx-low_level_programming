#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at specific index
 * Return: retuns 1 for success, -1 for error
 *
 * @head: pointer to doublylinked list
 * @index: index to be deleted
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *point = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		free(point);
		(*head) = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}

	while (index != 0 && point->next)
	{
		index--;
		point = point->next;
		if (index == 0)
			break;
	}

	if (!point->next && point->prev)
	{
		point->prev->next = NULL;
		*head = point->next;
		free(point);
		return (1);
	}
	else if (point->next && point->prev)
	{
		point->prev->next = point->next;
		point->next->prev = point->prev;
		free(point);
		return (1);
	}
	else
		return (-1);
}

#include "lists.h"

/**
 * add_dnodeint - adds new node to beginning of
 * doublylinkedlist
 *
 * Return: retuns address of new node
 * @head: head pointer
 * @n: value for new_node->n
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}

	new->next = *head;
	(*head)->prev = new;
	*head = new;

	return (new);
}

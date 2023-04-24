#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of
 * a doubly linked list
 *
 * Return: retun the address of the new node
 * @head: head pointer of doubly linked list
 * @n: values of new_node->n
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *checker = *head;
	dlistint_t *new = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (checker->next != NULL)
		checker = checker->next;

	new->prev = checker;
	checker->next = new;

	return (new);
}

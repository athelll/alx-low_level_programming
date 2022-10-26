#include "lists.h"

/**
  * pop_listint - deletes head node
  * @head: pointer to list
  * Return: returns the data of cleared node.
  */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int node_data;

	if (*head == NULL)
		return (0);

	tmp = *head;
	node_data = tmp->n;
	*head = tmp->next;

	free(tmp);

	return (node_data);
}

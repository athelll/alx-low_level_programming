#include "lists.h"

/**
  * sum_listint - sums the elements in a list
  * @head: pointer to list
  * Return: returns the sum of list
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

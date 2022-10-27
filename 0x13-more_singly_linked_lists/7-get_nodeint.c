#include "lists.h"

/**
  * get_nodeint_at_index - retuens the nth node of an index
  * @head: pointer to list
  * @index: index of list
  * Return: returns pointer to list node of specific index
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (count < index)
	{
		if (head->next == NULL)
			return (NULL);

		head = head->next;

		count++;
	}

	return (head);
}

#include "lists.h"

void free_listint(listint_t *head)
{
	while(head->next != NULL)
	{
		free(head);
		head = head->next;
	}

	free(head);
}

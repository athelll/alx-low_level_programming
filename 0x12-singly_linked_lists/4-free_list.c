#include "lists.h"
#include <string.h>

/**
  * free_list - frees list
  * @head: head pointer
  */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}

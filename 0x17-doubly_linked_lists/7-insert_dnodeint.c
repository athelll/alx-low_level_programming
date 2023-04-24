#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node in doublylinkedlist
 * Return: address of new node
 *
 * @h: pointer to head node
 * @idx: index to be inserted into
 * @n: value of new_node->n
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *buf = *h;
	dlistint_t *new = (dlistint_t *) malloc(sizeof(dlistint_t));

	/** checks if allocated memory is null **/
	if (new == NULL)
		return (NULL);

	/** handles begininng insertion **/
	if (idx == 0)
		return (add_dnodeint(h, n));

	/** handles middle insertion **/
	while ((idx != 0) && (buf->next != NULL))
	{
		idx--;
		buf = buf->next;
		if (idx == 0)
		{
			new->n = n;
			new->next = buf;
			new->prev = buf->prev;
			buf->prev->next = new;
			buf->prev = new;
			return (new);
		}
	}

	/** handles ending insertion **/
	if (buf->next == NULL)
		return (add_dnodeint_end(h, n));

	/** handles any unforseen abnormalities**/
	return (NULL);
}

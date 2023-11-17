#include "lists.h"
/**
 * list_len- list length
 * @h: singly linked list.
 * Return: The number of nodes.
 */

size_t list_len(const list_t *h)
{
	size_t elem;

	elem = 0;
	while (h != NULL)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}

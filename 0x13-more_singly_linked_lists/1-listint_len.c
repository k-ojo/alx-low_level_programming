#include "lists.h"
/**
 * listint_len- list length
 * @h: singly linked list.
 * Return: The number of nodes.
 */

size_t listint_len(const listint_t *h)
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

#include "lists.h"
/**
 * get_nodeint_at_index- gets nth node
 * @h: singly linked list.
 * @index: index to get node.
 * Return: found node or null
 */

listint_t *get_nodeint_at_index(listint_t *h, unsigned int index)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		if (index == i)
			return (h);
		h = h->next;
		i++;
	}
	return (0);
}

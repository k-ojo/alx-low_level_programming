#include "lists.h"
/**
 * print_listint-safe - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: The number of nodes.
 */

size_t print_listint_safe(const listint_t *h)
{
	size_t elem;

	elem = 0;
	if (h == 0)
		exit(98);
	while (h != 0)
	{
		printf("%i\n", h->n);
		h = h->next;
		elem++;
	}
	return (elem);
}

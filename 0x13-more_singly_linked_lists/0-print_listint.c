#include "lists.h"
/**
 * print_listint - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t elem;

	elem = 0;
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		elem++;
	}
	return (elem);
}

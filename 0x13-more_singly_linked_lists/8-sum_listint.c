#include "lists.h"
/**
 * sum_listint- sums all element in h
 * @h: singly linked list.
 *
 * Return: sum
 */
int sum_listint(listint_t *h)
{
	unsigned int sum = 0;

	while (h != NULL)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}

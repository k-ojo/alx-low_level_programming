#include "lists.h"

/**
 * insert_nodeint_at_index- inserts new element at n linked list
 * @head: input list
 * @idx: index
 * @n: input integer
 *
 * Return: new datum
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp, *new;
	listint_t *h = *head;

	while (*head != 0)
	{
		if (i == idx - 1)
		{
			new = malloc(sizeof(listint_t));
			tmp = (h)->next;
			(h)->next = new;
			new->n = n;
			new->next = tmp;

			return (new);
		}
		h = (h)->next;
		i++;
	}

	return (0);
}

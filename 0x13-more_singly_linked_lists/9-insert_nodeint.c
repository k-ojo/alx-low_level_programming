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
	unsigned int i = 1;
	listint_t *new, *prev, *h;


	if (!head)
		return (0);

	new = malloc(sizeof(listint_t));
	new->n = n;
	if (!new)
		return (0);
	if (idx == 0)
	{
		new->next = *head;
		return (new);
	}
	prev = *head;
	h = (*head)->next;

	while (*head != 0)
	{
		if (i == idx)
		{
			prev->next = new;
			new->next = h;
			return (new);
		}
		prev = h;
		h = (h)->next;
		i++;
	}
	free(new);
	return (0);
}

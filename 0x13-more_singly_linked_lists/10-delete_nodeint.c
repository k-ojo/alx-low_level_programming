#include "lists.h"

/**
 * delete_nodeint_at_index- removes integer in linked list
 * @head: input list
 *
 * @index: index of integer to be deleted
 *
 * Return: 1 on success -1 if fails
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *tmp, *prev, *h;

	h = *head;
	if (*head == 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	prev = h;
	h = h->next;

	while (*head != 0)
	{
		if (i == index && h->next != 0)
		{
			prev->next = h->next;
			free(h);
			return (1);
		}
		prev = h;
		h = (h)->next;
		i++;
	}

	return (-1);
}

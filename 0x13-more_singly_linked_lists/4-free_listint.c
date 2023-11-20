#include "lists.h"

/**
 * free_listint- free list
 *
 * @head: input list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != 0)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

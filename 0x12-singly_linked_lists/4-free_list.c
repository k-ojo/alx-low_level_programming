#include "lists.h"

/**
 * free_list- free list
 *
 * @head: input list
 *
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != 0)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}

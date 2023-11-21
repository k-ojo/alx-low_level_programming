#include "lists.h"
/**
 * free_listint2- prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: nothing
 */

void free_listint2(listint_t **h)
{
	listint_t *tmp;

	while (*h != NULL)
	{
		tmp = *h;
		*h = (*h)->next;
		free(tmp);
	}
}

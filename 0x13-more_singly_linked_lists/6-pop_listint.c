#include "lists.h"

/**
 * pop_listint- removes head of linked list
 * @head: input list
 *
 * Return: poped datum
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (*head == 0)
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (n);
}


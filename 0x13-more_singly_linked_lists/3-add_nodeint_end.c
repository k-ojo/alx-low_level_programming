#include "lists.h"

/**
 * add_nodeint_end- adds node at the back list
 *
 * @head: the input list
 * @n: input int of new node
 *
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *hold;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);
	new->n = n;
	new->next = 0;
	hold = *head;
	if (hold == 0)
	{
		*head = new;
	}
	else
	{
		while (hold->next != 0)
		{
			hold = hold->next;
		}
		hold->next = new;
	}
	return (new);
}

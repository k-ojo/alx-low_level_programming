#include "lists.h"

/**
 * add_nodeint- adds new node to linked list
 *
 * @head: a pointer to the head of the linked list
 * @n: name of node
 *
 * Return: address of new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}

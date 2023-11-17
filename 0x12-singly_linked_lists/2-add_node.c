#include "lists.h"

/**
 * add_node- adds new node to linked list
 *
 * @head: a pointer to the head of the linked list
 * @str: name of node
 *
 * Return: address of new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (0);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}

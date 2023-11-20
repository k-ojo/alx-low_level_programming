#include "lists.h"

/**
 * add_node_end- adds node at the back list
 *
 * @head: the input list
 * @str: name of new node
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *hold;

	new = malloc(sizeof(list_t));
	if (!new)
		return (0);
	new->str = strdup(str);
	new->len = strlen(str);
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

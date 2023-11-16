#include "lists.h"

/**
 * print_node - prints node
 * @h: input list
 *
 * Return: nothing
 */
void print_node(const list_t *h)
{

	if (!h->str)
	{
		printf("[%d] (null)\n", 0);
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}
}

/**
 * print_list- prints entire linked list
 *
 * @h: the input list
 * Return: Number of elements in list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		print_node(h);
		h = h->next;
		count++;
	}
	return (count);
}

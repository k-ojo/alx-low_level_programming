#include "lists.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_node - prints node
 * @h: input list
 *
 * Return: nothing
 */
void print_node(const list_t *h)
{

	printf("[%i] ", h->len);
	if (!h->str)
	{
		printf("(null)\n");
	}
	else
	{
		printf("%s\n", h->str);
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

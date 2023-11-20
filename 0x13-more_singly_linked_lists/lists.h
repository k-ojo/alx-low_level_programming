#ifndef _LIST_
#define _LIST_
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @int - (malloc'ed string)
 *
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **h, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
int print_int(int n);
int _putchar(char c);
void print_node(const listint_t *h);
#endif

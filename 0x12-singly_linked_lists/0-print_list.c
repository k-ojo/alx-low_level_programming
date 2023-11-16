#include "lists.h"



#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

}

/**
 * print_int - prints integer
 * @n: integer to be printed
 * Return: number of characters printed
 */
int print_int(int n)
{
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * print_node - prints node
 *
 * @h: input node
 *
 * Return: nothing
 */
void print_node(const list_t *h)
{
	unsigned int i;

	_putchar('[');
	print_int(h->len);
	_putchar(']');
	_putchar(' ');
	if (!h->str)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		_putchar('\n');
		return;
	}
	for (i = 0; i < h->len; i++)
	{
		_putchar(h->str[i]);
	}
	_putchar('\n');
}

/**
 * print_list- prints entire linked list
 *
 * @h: the input list
 * Return: Number of elements in list
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h->next != 0)
	{
		print_node(h);
		h = h->next;
		count++;
	}
	print_node(h);
	count++;
	return (count);
}

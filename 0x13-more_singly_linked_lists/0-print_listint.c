#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints listint_t list elements
 * @h: points to head of l-list
 * Return: node number
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *c;
	size_t count;

	for (c = h, count = 0; c != NULL; count++, c = c->next)
		printf("%d\n", c->n);

	return (count);
}

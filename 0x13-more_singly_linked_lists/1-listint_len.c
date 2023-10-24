#include "lists.h"

/**
 * listint_len - finds num linked list elements
 * @h: points to head
 * Return: nums of elements in our l-list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *c;
	size_t count;

	for (c = h, count = 0; c != NULL; count++, c = c->next)
		;

	return (count);
}

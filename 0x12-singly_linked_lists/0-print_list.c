#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints elements of the list_t list
 * @h: points to the head of the linked list
 * Return: node number
 */
size_t print_list(const list_t *h)
{
	int c;

	c = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] (nil)\n", h->len);
		else
			printf("[%u] %s\n", h->len, h->str);
		c += 1;
		h = h->next;
	}
	return (c);
}

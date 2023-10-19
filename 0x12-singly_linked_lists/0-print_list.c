#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints elements of the list_t list
 * @h: points to the head of the linked list
 * Return: node number
 */
size_t print_list(const list_t *h)
{
	const list_t *current;
	size_t k;

	k = 0;
	current = h;
	while (current != NULL)
	{
		printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		k++;
	}

	return (k);
}

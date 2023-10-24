#include "lists.h"

/**
 * sum_listint - retrieves sum of int n of listint_t linked list
 * @head: points to head
 * Return: sums int n
 */
int sum_listint(listint_t *head)
{
	int total;
	listint_t *current;

	for (total = 0, current = head; current != NULL; current = current->next)
		total += current->n;

	return (total);
}

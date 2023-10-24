#include "lists.h"

/**
 * free_listint2 - frees `listint_t` list
 * @head: point to head
 */
void free_listint2(listint_t **head)
{
	listint_t *holder;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		holder = *head;
		*head = (*head)->next;
		free(holder);
	}
}

#include "lists.h"

/**
 * free_listint - frees `listint_t` list
 * @head: head/points to start of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *holder;

	while (head != NULL)
	{
		holder = head;
		head = head->next;
		free(holder);
	}
}

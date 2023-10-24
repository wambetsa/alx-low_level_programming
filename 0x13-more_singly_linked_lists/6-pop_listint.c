#include "lists.h"

/**
 * pop_listint - Delete or removes head node from the list
 * @head: point to head node of linked list
 * Return: first nodes data `n`
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *hold;

	if (*head == NULL)
		return (0);

	hold = *head;
	i = hold->n;
	*head = hold->next;
	free(hold);

	return (i);
}

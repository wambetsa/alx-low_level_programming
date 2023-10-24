#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves nth node of `listint_t` linked list
 * @head: points to head
 * @index: index to search in list
 * Return: pointer to node or NULL if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int counter;

	current = head;
	counter = 0;
	while (counter < index)
	{
		if (current)
			current = current->next;
		else
			return (NULL);
		counter++;
	}

	if (current)
		return (current);
	else
		return (NULL);
}

#include "lists.h"

/**
 * free_listint_safe - frees listint_t list and nulls head pointer
 * @h: points head of linked list
 * @Description: works for circular lists
 * single looping
 * Return: size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *hold;
	size_t counter;

	counter = 0;
	current = *h;
	while (current != NULL)
	{
		counter++;
		hold = current;
		current = current->next;
		free(hold);

		if (hold < current)
			break;
	}
	*h = NULL;

	return (counter);
}

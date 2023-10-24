#include "lists.h"

/**
 * add_nodeint - adds new nodes at start of `listint_t` list
 * @head: points to first element
 * @n: value stored in new node
 * Return: new element address or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *hold;
	listint_t *new;

	hold = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	*head = new;

	if (hold == NULL)
		new->next = NULL;
	else
		new->next = hold;

	return (new);
}

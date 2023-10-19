#include "lists.h"

/**
 * len - finds string length
 * @str: string constant
 * Return: string length
 */

int len(const char *str)
{
	int c;

	if (str == NULL)
		return (0);
	for (c = 0; str[c] != '\0'; c++)
		;
	return (c);
}

/**
 * add_node_end - adds new node at end of list_t list
 *
 * @head: pointer to head
 * @str: string taking linked list
 *
 * Return: new element address or fail status
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));
	list_t *last = *head;

	if (new_node == NULL || str == NULL)
	{
		free(new_node);
		return NULL;
	}
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (*head);
}

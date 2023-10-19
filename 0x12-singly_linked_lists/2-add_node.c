#include "lists.h"

/**
 * len - Calculates string length
 * @str: string constant
 *
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
 * add_node - function adding new node at beginning of list_t list
 * @head: points to head of linked list
 * @str: node string
 *
 * Return: new element address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len =  len(str);
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}

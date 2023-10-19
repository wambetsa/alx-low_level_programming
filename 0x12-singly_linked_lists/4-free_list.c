#include "lists.h"

/**
 * free_list - function freeing list_t list
 * @head: pointer to first node
 */

void free_list(list_t *head)
{

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		list_t *temp;

		temp = head;
		free(temp->str);
		free(temp);
		head = head->next;
	}
}

#include "hash_tables.h"

/**
 * hash_table_print - outputs hash table
 * @ht: hash table
 * Return: 0
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nodes = NULL;
	unsigned int k = 0;
	char *string = "";

	if (ht == NULL)
		return;
	printf("{");
	for (k = 0; k < ht->size; k++)
	{
		nodes = ht->array[k];
		if (nodes != NULL)
			printf("%s", string);
		while (nodes != NULL)
		{
			printf("'%s': '%s'", nodes->key, nodes->value);
			if (nodes->next != NULL)
				printf("%s", string);
			nodes = nodes->next;
			string = ", ";
		}
	}
	printf("}\n");
}
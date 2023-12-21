#include "hash_tables.h"

/**
 * hash_table_set - adds elements to hash table
 * @ht: hash table to be updated
 * @key: non-empty input key
 * @value: value associated with the key
 * Return: 1 on succees and 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *ell = NULL, *new_n = NULL;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (0);
	
    idx = key_index((unsigned char *) key, ht->size);
	ell = ht->array[idx];

	if (ell && strcmp(key, ell->key) == 0)
	{
		free(ell->value);
		ell->value = strdup(value);
		return (1);
	}
	
    new_n = malloc(sizeof(hash_node_t));
	if (new_n == NULL)
		return (0);
	
    new_n->key = strdup(key);
	new_n->value = strdup(value);
	new_n->next = ht->array[idx];
	ht->array[idx] = new_n;
	return (1);
}
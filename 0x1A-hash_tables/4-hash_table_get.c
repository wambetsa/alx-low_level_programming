#include "hash_tables.h"

/**
 * hash_table_get - retrieves array value associated
 * @ht: hash table
 * @key: key to search
 * Return: element value or NULL for missing key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *ct;

	if (ht == NULL || key == NULL)
		return (NULL);
	idx = key_index((const unsigned char *) key, ht->size);
	ct = ht->array[idx];
	while (ct != NULL)
	{
		if (strcmp(key, ct->key) == 0)
			return (ct->value);
		ct = ct->next;
	}
	return (NULL);
}
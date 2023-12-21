#include "hash_tables.h"

/**
 * key_index - returns index of a key
 * @key: input of the key
 * @size: input of the size
 * Return: index where the key/value pair need to be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int k;

	k = hash_djb2(key) % size;
	return (k);
}
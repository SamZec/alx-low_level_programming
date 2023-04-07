#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key.
 * @key: is the key
 * @size: is the size of array of hash table
 *
 * Return: the index at which the key/value pair should be stored
 *		in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int c;
	unsigned long int hash;

	if (key == NULL || size == 0)
		return (0);

	hash = 5381;
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash % size);
}

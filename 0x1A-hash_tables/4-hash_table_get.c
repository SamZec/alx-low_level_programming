#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: hash table looking into
 * @key: key looking for
 *
 * Return: the value associated with the element, otherwise NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hld;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	hld = ht->array[index];
	while (hld)
	{
		if (strcmp(hld->key, key) == 0)
			return (hld->value);
		hld = hld->next;
	}
	return (NULL);
}

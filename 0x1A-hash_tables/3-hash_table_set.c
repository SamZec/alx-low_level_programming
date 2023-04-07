#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: hash table
 * @key: is the key
 * @value: value associated with key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n_hash_node;
	unsigned long int index;

	if (key == NULL || value == NULL || ht->size == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	n_hash_node = ht->array[index];

	while (n_hash_node != NULL)
	{
		if (strcmp(key, n_hash_node->key) == 0)
		{
			free(n_hash_node->value);
			n_hash_node->value = strdup(value);
			return (1);
		}
		n_hash_node = n_hash_node->next;
	}
	n_hash_node = malloc(sizeof(hash_node_t));
	if (n_hash_node == NULL)
		return (0);
	strcpy(n_hash_node->key, key);
	strcpy(n_hash_node->value, value);
	n_hash_node->next = ht->array[index];
	ht->array[index] = n_hash_node->next;

	return (1);
}

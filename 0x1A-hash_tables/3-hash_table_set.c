#include "hash_tables.h"
#include <string.h>

/**
 * hashes - insert node into a hash table at index
 *
 * @h_node: pointer to node at index
 * @key: is the key
 * @value: value associated with key
 *
 * Return: pointer to node at index
 */
hash_node_t *hashes(hash_node_t **h_node, const char *key, const char *value)
{
	hash_node_t *n_hash_node;

	n_hash_node = *h_node;

	while (n_hash_node != NULL)
	{
		if (strcmp(key, n_hash_node->key) == 0)
		{
			free(n_hash_node->value);
			n_hash_node->value = strdup(value);
			return (*h_node);
		}
		n_hash_node = n_hash_node->next;
	}

	n_hash_node = malloc(sizeof(hash_node_t));

	if (n_hash_node == NULL)
		return (NULL);

	n_hash_node->key = strdup(key);
	n_hash_node->value = strdup(value);
	n_hash_node->next = *h_node;
	*h_node = n_hash_node;

	return (*h_node);
}

/**
 * hash_table_set - a function that adds an element to the hash table.
 *
 * @ht: is the hash table
 * @key: is the key
 * @value: value associated with key
 *
 * Return: 1 if successes, 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (hashes(&(ht->array[index]), key, value) == NULL)
		return (0);

	return (1);
}

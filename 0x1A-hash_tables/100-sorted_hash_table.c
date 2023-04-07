#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

/**
 * shash_table_create - creates a hash table
 * @size: is the size of hash table
 *
 * Return: pointer the table otherwise NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *hash_table;
	shash_node_t *_array;

	hash_table = malloc(sizeof(shash_table));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	_array = malloc(sizeof(shash_node_t *) * size);
	if (_array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		_array[i] = NULL;
	hash_table->array = _array;
	return (hash_table);
}

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

/**
 * hashes - insert node into a hash table at index
 *
 * @h_node: pointer to node at index
 * @key: is the key
 * @value: value associated with key
 *
 * Return: pointer to node at index
 */
shash_node_t *hashes(shash_node_t **h_node, const char *key, const char *value)
{
	shash_node_t *n_hash_node;

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
 * shash_table_set - add element to the hash table
 * @ht: pointer to hash table
 * @key: is the key
 * @value: is value associated with key
 *
 * Return: 1 if success otherwise 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
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


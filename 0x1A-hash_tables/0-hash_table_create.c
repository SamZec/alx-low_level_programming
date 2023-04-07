#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with a given size
 * @size: size of the hash table
 *
 * Return: the created hash table, otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	hash_node_t **_array;
	unsigned long int i;

	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
		return (NULL);

	_array = malloc(sizeof(hash_node_t *) * h_table->size);
	if (_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		_array[i] = NULL;

	h_table->array = array;
	h_table->size = size;

	return (h_table);
}

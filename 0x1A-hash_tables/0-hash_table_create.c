#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: size of hash table
 *
 * Return: a pointer to the newly created hash table
 *		otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *h_table;
	hash_node_t **_array;

	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
		return (NULL);
	h_table->size = size;
	_array = malloc(sizeof(hash_node_t *) * h_table->size);
	if (h_table == NULL)
		return (NULL);
	for (i = 0; i < h_table->size; i++)
		_array[i] = NULL;
	h_table->array = _array;
	return (h_table);
}

#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table to be deleted
 *
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hld;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	while (i < ht->size)
	{
		while (ht->array[i])
		{
			hld = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = hld;
		}
		i++;
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}

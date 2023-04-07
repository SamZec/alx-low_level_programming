#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hld;
	unsigned long int i = 0;
	int last = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	while (i <= ht->size)
	{
		hld = ht->array[i];
		while (hld)
		{
			if (last != 0)
				printf(", ");
			printf("'%s' : '%s'", hld->key, hld->value);
			last = 1;
			hld = hld->next;
		}
		i++;
	}
	printf("}\n");
}

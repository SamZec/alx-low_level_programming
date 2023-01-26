#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 *		in a linked list_t list.
 * @h: list_t list.
 *
 * Return: number of list elements.
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		if (h->str == NULL)
			return (0);
		elements++;
		h = h->next;
	}
	return (elements);
}

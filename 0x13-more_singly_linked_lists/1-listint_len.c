#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the listint_t list.
 *
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t len = 0;

	if (h == NULL)
		return (0);
	temp = h;
	while (temp)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}

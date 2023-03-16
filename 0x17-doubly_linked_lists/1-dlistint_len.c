#include "lists.h"

/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list.
 * @h: pointer to first node
 *
 * Return: number of nodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *temp;

	if (h == NULL)
		return (0);
	temp = h;
	while (temp)
	{
		n++;
		temp = temp->next;
	}
	return (n);
}

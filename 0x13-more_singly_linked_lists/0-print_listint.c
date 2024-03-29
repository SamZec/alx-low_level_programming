#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to listint_t list
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t len = 0;

	if (h == NULL)
		return (0);
	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		len++;
		temp = temp->next;
	}
	return (len);
}

#include "lists.h"

/**
 * sum_dlistint -  returns sum of all the data (n) of a dlistint_t linked list.
 * @head: pointer to first node
 *
 * Return: Sum of (n) otherwise 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tail;
	int _sum = 0;

	if (head == NULL)
		return (0);
	tail = head;
	while (tail)
	{
		_sum += tail->n;
		tail = tail->next;
	}
	return (_sum);
}

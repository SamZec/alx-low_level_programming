#include "lists.h"

/**
 * sum_listint -  sum all the data (n) of a listint_t linked list.
 * @head: pointer to head node of listint_t list.
 *
 * Return:  sum of all the data (n) otherwise 0 if list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

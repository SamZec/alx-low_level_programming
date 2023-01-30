#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 *	linked list, and returns the head node’s data (n).
 * @head: pointer to the first node in listint_t list.
 *
 * Return: 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL)
		return (0);
	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}

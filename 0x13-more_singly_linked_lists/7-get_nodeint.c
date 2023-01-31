#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to head node in listint_t list.
 * @index: the position to return in from the list
 *
 * Return: NULL if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (count < index)
	{
		head = head->next;
		count++;
	}
	return (head);
}

#include "lists.h"

/**
 * free_dlistint - frees a dlistint list.
 * @head: pointer to first node in list_t list.
 *
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

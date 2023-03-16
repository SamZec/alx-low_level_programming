#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the end of a dlistint_t list.
 * @head: pointer to first node
 * @n: new list element
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nnode, *tail;

	nnode = malloc(sizeof(dlistint_t));
	if (nnode == NULL)
		return (NULL);
	nnode->n = n;
	if ((*head) == NULL)
		(*head) = nnode;
	else
	{
		tail = (*head);
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = nnode;
		nnode->prev = tail;
		tail = nnode;
	}
	return ((*head));
}

#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to first node
 * @n: new list element
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nnode;

	nnode = malloc(sizeof(dlistint_t));
	if (nnode == NULL)
		return (NULL);
	nnode->n = n;
	if ((*head) == NULL)
		(*head) = nnode;
	else
	{
		(*head)->prev = nnode;
		nnode->next = (*head);
		(*head) = nnode;
	}
	return ((*head));
}

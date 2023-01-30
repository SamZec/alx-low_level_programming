#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to first node in listint_t list.
 * @n: new node element.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnode;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);
	nnode->n = n;
	nnode->next = NULL;
	if (*head == NULL)
		*head = nnode;
	else
	{
		nnode->next = *head;
		*head = nnode;
	}
	return (*head);
}

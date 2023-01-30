#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to first node in listint_t list.
 * @n: new node element.
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *nnode;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);
	nnode->n = n;
	nnode->next = NULL;
	if (*head == NULL)
		*head = nnode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = nnode;
	}
	return (*head);
}

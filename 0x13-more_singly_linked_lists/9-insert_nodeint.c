#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to head node in listint_t list.
 * @idx: index of the list where the new node should be added
 * @n: new node element.
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *node;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	temp = *head;
	if (idx == 0)
	{
		node->next = temp;
		*head = node;
		return (node);
	}
	while (count < (idx - 1))
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
		count++;
	}
	node->next = temp->next;
	temp->next = node;
	return (node);
}

#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to first node in list_t list
 * @str: new node.
 *
 * Return: address of new element otherwise NULL if failure.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *temp;
	int len;
	list_t *newnode, *temp1;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	temp = strdup(str);
	if (str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	newnode->str = temp;
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;

	else
	{
		temp1 = *head;
		while (temp1->next != NULL)
			temp1 = temp1->next;
		temp1->next = newnode;
	}

	return (*head);
}

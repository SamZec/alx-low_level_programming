#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to first node in list_t list
 * @str: new node.
 *
 * Return: address of new element otherwise NULL if failure.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *temp;
	int len;
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	temp = strdup(str);
	if (temp == NULL)
	{
		free(newnode);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	newnode->str = temp;
	newnode->len = len;
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}

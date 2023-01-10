#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: takes size of array
 * @c: takes the specific character
 *
 * Return: pointer to array otherwise NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	ptr = malloc(sizeof(c) * size);
	for (i = 0; i < size; i++)
	{
		if (ptr != NULL)
			ptr[i] = c;
		else
			return (NULL);
	}
	return (ptr);
}

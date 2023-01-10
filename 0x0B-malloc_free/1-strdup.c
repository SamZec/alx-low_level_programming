#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: takes the string
 *
 * Return: pointer to string otherwise NULL
 */
char *_strdup(char *str)
{
	unsigned int index1, index2 = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(str));
	if (ptr != NULL)
	{
		for (index1 = 0; str[index1]; index1++)
		{
			ptr[index2] = str[index1];
			index2++;
		}
	}
	else
		return (NULL);
	return (ptr);
}

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
	for (index1 = 0; str[index1]; index1++)
		;
	ptr = malloc(sizeof(char) * (index1 + 1));
	if (ptr != NULL)
	{
		for (index2 = 0; str[index2]; index2++)
		{
			ptr[index2] = str[index2];
		}
		ptr[index1] = '\0';
	}
	else
		return (NULL);
	return (ptr);
}

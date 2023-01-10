#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: takes one string
 * @s2: takes another string
 *
 * Return: contents of s1 and s2 otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int index, index2 = 0, len = 0;
	char *ptr_cat;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (index = 0; s1[index] || s2[index]; index++)
		len++;
	ptr_cat = malloc(sizeof(char) * len);
	if (ptr_cat == NULL)
		return (NULL);
	for (index = 0; s1[index]; index++)
		ptr_cat[index2++] = s1[index];
	for (index = 0; s2[index]; index++)
		ptr_cat[index2++] = s2[index];
	return (ptr_cat);
}

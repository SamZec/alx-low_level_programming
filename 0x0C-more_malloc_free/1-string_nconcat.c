#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: takes first string
 * @s2: takes second string
 * @n: takes number of first byte to be concat
 *
 * Return: pointer to memory containing s1 and first n bytes of s2
 *	otherwise NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int index1, len = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index1 = 0; s1[index1]; index1++)
		len++;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	len = 0;
	for (index1 = 0; s1[index1]; index1++)
		ptr[len++] = s1[index1];
	for (index1 = 0; s2[index1] && index1 < n; index1++)
		ptr[len++] = s2[index1];
	ptr[len] = '\0';
	return (ptr);
}

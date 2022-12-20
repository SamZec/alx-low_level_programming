#include "main.h"

/**
 * *_strcpy - copies string pointed to by src to dest
 * @dest: takes copied string
 * @src: take the string to be copied
 *
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i]; i++)
		;
	for (j = 0; j <= i; j++)
		dest[j] = src[j];
	return (dest);
}

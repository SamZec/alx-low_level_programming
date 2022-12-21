#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings by n bytes
 * @dest: first string
 * @src: second string
 * @n: bytes specifier
 *
 * Return: pointer to dest with string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *hld;

	hld = strncat(dest, src, n);
	dest = hld;
	return (dest);
}

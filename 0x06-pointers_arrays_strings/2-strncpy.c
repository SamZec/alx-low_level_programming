#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: stores copied string
 * @src: takes string to be copied
 * @n: bytes specifier
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *hld;

	hld = strncpy(dest, src, n);
	return (hld);
}

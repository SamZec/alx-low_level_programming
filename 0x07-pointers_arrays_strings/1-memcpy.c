#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: first memery area
 * @src: second mmory area
 * @n: amount of memory to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

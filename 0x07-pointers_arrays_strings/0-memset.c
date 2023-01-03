#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: pointer to memory
 * @b: holds constant byte
 * @n: integer
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *mem = s;
	char value = b;

	for (i = 0; i < n; i++)
		mem[i] = value;
	return (mem);
}

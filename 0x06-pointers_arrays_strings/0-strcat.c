#include "main.h"
#include <string.h>

/**
 * _strcat - concantenates two strigs
 * @dest: takes first string
 * @src: takes the second string
 *
 * Return: pointer to dest contaning the string
 */
char *_strcat(char *dest, char *src)
{
	char *hld;

	hld = strcat(dest, src);
	dest = hld;
	return (dest);
}

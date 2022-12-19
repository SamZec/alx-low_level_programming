#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: takes the string
 *
 * Return: length of string in int
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

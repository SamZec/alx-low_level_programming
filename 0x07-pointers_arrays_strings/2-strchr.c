#include "main.h"

/**
 * _strchr - locates a char in string
 * @s: string holder
 * @c: char to be located
 *
 * Return: first occurrance of c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}

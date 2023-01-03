#include "main.h"

/**
 * _strspn - gets the length of a prefix string
 * @s: string holder
 * @accept: bytes to return
 *
 * Return: segment of s consisting of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int index;
	unsigned int bytes = 0;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}

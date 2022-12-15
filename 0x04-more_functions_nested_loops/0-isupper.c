#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: takes the character to be checked
 *
 * Returns: 1 if c is uppercase 0 otherwise
 */
int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}


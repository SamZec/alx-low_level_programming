#include "main.h"

/**
 * int _isalpha - checks for a letter
 * @c: takes character to check
 *
 * Return: 1 if c is lower or upper character
 */
int _isalpha(int c)
{
	if ('a' <= c && c <= 'z' || 'A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}

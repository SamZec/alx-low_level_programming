#include "main.h"

/**
 * _islower - checks for lowercase alphabet
 * @c - takes character
 *
 * Return: 1 if c is lower 0 otherwise
 */
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}

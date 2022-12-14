#include "main.h"

/**
 * int _islower - checks for lowercase character
 *
 * Return: 1 if c is lowercase
 *
 * Return: 0 otherwise
 */
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}

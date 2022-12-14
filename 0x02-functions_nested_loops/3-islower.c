#include "main.h"

/**
 * _islower - checks for lowercase character
 *c - takes a characeter 
 * Return: 1 if c is lowercase
 */
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * int _islower - checks for lowercase character
 *
 * Return: 1 (success) 0 (failure)
 */
int _islower(int c)
{
	if ('a' <= c <= 'z')
		return (1);
	else
		return (0);
}

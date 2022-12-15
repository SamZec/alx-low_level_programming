#include "main.h"

/**
 * _isdigit - checks for a digit 0 through to 9
 * @c: takes the digit
 *
 * Return: 1 if c is a digit 0 otherwise
 */
int _isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

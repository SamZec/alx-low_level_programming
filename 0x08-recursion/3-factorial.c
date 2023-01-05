#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: integer to be factored.
 *
 * Return: 0 (success) otherwise -1
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else if (n > 0)
		return (n * factorial(n - 1));
	return (0);
}

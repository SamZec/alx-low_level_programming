#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: takes the sign to be printed
 *
 * Return: 1 and + if n is greater than zero,
 * 0 and 0 if n is zero,
 * -1 and - if n is less than 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
}

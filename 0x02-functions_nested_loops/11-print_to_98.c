#include "main.h"

/**
 * print_to_98 - print natural numbers to 98
 * @n: takes the starting parameter
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i);
			_putchar(',');
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		for (i = n; n >= 98; i--)
		{
			_putchar(i);
			_putchar(',');
		}
		_putchar('\n');
	}
	else
	{
		_putchar(n);
		_putchar('\n');
	}
}

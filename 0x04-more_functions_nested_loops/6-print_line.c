#include "main.h"

/**
 * print_line - draws straight line in the termial
 * @n: determine the length of the line
 *
 * Return: print _ if n is greater than 0 otherwise \n
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}

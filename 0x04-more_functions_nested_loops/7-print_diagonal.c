#include "main.h"

/**
 * print_diagonal - draws diagonal line on terminal
 * @n: determine the depth of the diagonal
 *
 * Return: print \ if n > 0 otherwise \n
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			for (j = 0; j <= i; j++)
				_putchar(' ');
		}
	}
	else
		_putchar('\n');
}

#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of triangle.
 *
 * Return: triangle otherwise only newline if size is 0 or less.
 */
void print_triangle(int size)
{
	int space, shape, upd;

	if (size > 0)
	{
		upd = 1;
		while (size >= 1)
		{
			for (space = size; space > 1; space--)
				_putchar(' ');
			for (shape = upd; shape >= 1; shape--)
				_putchar('#');
			size--;
			upd += 1;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

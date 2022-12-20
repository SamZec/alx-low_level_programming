#include "main.h"

/**
 * puts_half - print half of string
 * @str: takes string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, n, j;

	for (i = 0; str[i]; i++)
		;
	if (i % 2 == 0)
	{
		n = i / 2;
		for (j = n; j < i; j++)
			_putchar(str[j]);
	}
	else
	{
		n = (i / 2) + 1;
		for (j = n; j < i; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}

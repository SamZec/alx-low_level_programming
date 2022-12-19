#include "main.h"

/**
 * puts2 - print every other chracter of string from first
 * @str: takes the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, k;

	for (i = 0; str[i]; i++)
		;
	for (k = 0; k <= i; k += 2)
		_putchar(str[k]);
	_putchar('\n');
}

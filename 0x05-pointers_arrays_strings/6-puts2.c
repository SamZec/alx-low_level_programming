#include "main.h"

/**
 * puts2 - print every other chracter of string from first
 * @str: takes the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (j = 0; j <= i; j += 2)
		_putchar(str[j]);
	_putchar('\n');
}

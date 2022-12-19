#include "main.h"

/**
 * puts2 - print every other chracter of string from first
 * @str: takes the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}

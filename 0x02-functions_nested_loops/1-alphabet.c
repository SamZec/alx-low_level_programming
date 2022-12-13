#include "main.h"

/**
 * print_alphabet - print lowercase alphabet
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int i = 97;

	for (i = 48; i <= 112; i++)
		_putchar(i);
	putchar('\n');
	return (0);
}

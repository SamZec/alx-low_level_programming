#include "main.h"

/**
 * main - Prints _putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char n[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
	int i;

	for (i = 0; i < 9; i++)
		_putchar(n[i]);
	return (0);
}

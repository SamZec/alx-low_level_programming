#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @k: takes the number
 *
 * Return: the last digit
 */
int print_last_digit(int k)
{
	int res;

	res = k % 10;
	if (res < 0)
		res *= -1;

	_putchar(res + '0');
	return (res);
}

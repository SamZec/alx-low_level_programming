#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int res;

	res = *a;
	*a = *b;
	*b = res;
}
